	INCLUDE	"graphics/grafix.inc"

	PUBLIC	xorpixel

	EXTERN pixeladdress
	EXTERN	coords

;
;	$Id: xorpixl.asm,v 1.6 2015/01/19 01:32:47 pauloscustodio Exp $
;

; ******************************************************************
;
; Plot pixel at (x,y) coordinate.
;
; Design & programming by Gunther Strube, Copyright (C) InterLogic 1995
;
; The (0,0) origin is placed at the bottom left corner.
;
; in:  hl	= (x,y) coordinate of pixel (h,l)
;
; registers changed	after return:
;  ..bc..../ixiy same
;  af..dehl/.... different
;
; ******************************************************************
;
; XOR added by Stefano Bodrato (Feb 2001)
;
; **************
;

.xorpixel
			IF maxx <> 256
				ld	a,h
				cp	maxx
				ret	nc
			ENDIF

				ld	a,l
				cp	maxy
				ret	nc			; y0	out of range
				
				ld	(coords),hl

				push	bc
				call	pixeladdress
				ld	b,a
				ld	a,1
				jr	z, xor_pixel		; pixel is at bit 0...
.plot_position			rlca
				djnz	plot_position
.xor_pixel			ex	de,hl
				xor	(hl)
				ld	(hl),a
				pop	bc
				ret

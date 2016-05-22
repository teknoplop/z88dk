;
; 	ANSI Video handling for the Sharp X1
;
; 	ANSI Video handling for the Commodore 128 (Z80 mode)
;	By Stefano Bodrato - 22/08/2001
;
; 	Text Attributes
;	m - Set Graphic Rendition
;	
;	$Id: f_ansi_attr.asm,v 1.4 2015/01/19 01:33:19 pauloscustodio Exp $
;

	PUBLIC	ansi_attr

	;XREF	INVRS
	EXTERN	ATTR

.ansi_attr
        and     a
        jr      nz,noreset
        ;ld      a,15		;White on black
        ld      a,7		;White on black
        ld      (ATTR+1),a
;	xor	a
;	ld	(INVRS+1),a
        ret
.noreset
        cp      1
        jr      nz,nobold
        ld		a,(ATTR+1)
        set		3,a
        ld      (ATTR+1),a
;	ld	a,128
;	ld	(INVRS+1),a
        ret
.nobold
        cp      2
        jr      z,dim
        cp      8
        jr      nz,nodim
.dim
        ld		a,(ATTR+1)
        res		3,a
        ld      (ATTR+1),a
        ret
.nodim
        cp      4
        jr      nz,nounderline
        ld		a,(ATTR+1)
        set		4,a
        ld      (ATTR+1),a
        ret
.nounderline
        cp      24
        jr      nz,noCunderline
        ld		a,(ATTR+1)
        res		4,a
        ld      (ATTR+1),a
        ret
.noCunderline
        cp      5
        jr      nz,noblink
        ld		a,(ATTR+1)
        set		4,a
        ld      (ATTR+1),a
        ret
.noblink
        cp      25
        jr      nz,nocblink
        ld		a,(ATTR+1)
        res		4,a
        ld      (ATTR+1),a
        ret
.nocblink
        cp      7
        jr      nz,noreverse
        ld		a,(ATTR+1)
        set		3,a
        ld      (ATTR+1),a
        ret
.noreverse
        cp      27
        jr      nz,noCreverse
        ld		a,(ATTR+1)
        res		3,a
        ld      (ATTR+1),a
        ret
.noCreverse
        cp      8
        jr      nz,noinvis
        ld      a,(ATTR+1)
        ld      (oldattr),a
        and     @11110000
        ld      e,a
        rra
        rra
        rra
        rra
        or      e
        ld      (ATTR+1),a
        ret
.oldattr
        defb     0
.noinvis
        cp      28
        jr      nz,nocinvis
        ld      a,(oldattr)
        ld      (ATTR+1),a
        ret
.nocinvis
        cp      30
        jp      m,nofore
        cp      37+1
        jp      p,nofore
        sub     30
        call	palette
;''''''''''''''''''''''
        ld      (ATTR+1),a
        ret
.nofore
        cp      40
        jp      m,noback
        cp      47+1
        jp      p,noback
        sub     40		; Workaround for background: we force to inverse video.
        call	palette		; could work in some cases, but isn't much compatible !
        set		3,a
;''''''''''''''''''''''
;	ld	(53280),a	;border
;	ld	(53281),a	;background
        ld      (ATTR+1),a
	;ld	a,128
	;ld	(INVRS+1),a
.noback
        ret


.palette
;'' Palette Handling ''
	ld	e,a
	ld	d,0
	ld	hl,attrtab
	add	hl,de
	ld	a,(hl)
	ret
.attrtab
	defb	0
	defb	2
	defb	4
	defb	6
	defb	1
	defb	3
	defb	5
	defb	7
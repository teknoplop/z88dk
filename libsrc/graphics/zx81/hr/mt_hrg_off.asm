;--------------------------------------------------------------
; ZX81 HRG library for the Memotech expansion
; by Stefano Bodrato, Feb. 2010
;--------------------------------------------------------------
;
;   Set TEXT mode
;
;	$Id: mt_hrg_off.asm,v 1.6 2015/07/08 05:57:53 stefano Exp $
;

	PUBLIC	mt_hrg_off
	PUBLIC	hrg_off

	EXTERN	MTCH_P1
	EXTERN	MTCH_P2
	EXTERN	MTCH_P3

.mt_hrg_off
.hrg_off


; No need to patch the shadow ROM copy back to original values
; because it will be excluded by hardware, but our custom
; interrupt handler won't. 

	ld	a,$0C			; alter PTR to D-FILE
	ld	(MTCH_P1+1),a	; patch our custom interrupt handler
	
	ld	a,25			; TEXT row counter
	ld	(MTCH_P2+2),a	; patch also our custom interrupt handler

IF FORzx81mt64
	xor a
	ld	(MTCH_P3+1),a	; patch also our custom interrupt handler
ENDIF
	
	jp	$2490		; MEMOTECH BASIC command

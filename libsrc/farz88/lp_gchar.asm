; Internal routine to read char at far pointer
; 31/3/00 GWL

; Entry: EHL=far pointer
; Exit: A=byte

;
; $Id: lp_gchar.asm,v 1.3 2015/01/19 01:32:43 pauloscustodio Exp $
;

        PUBLIC    lp_gchar

        EXTERN     farseg1


.lp_gchar
        ld      a,($04d1)
	ex	af,af'
        ld      b,h
        ld      c,l
        call    farseg1
        ld      a,(hl)
	ld	l,a
	ld	h,0
        ex	af,af'
        ld      ($04d1),a
        out     ($d1),a
	ex	af,af'
        ret


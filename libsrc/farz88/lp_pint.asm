; Internal routine to write int at far pointer
; 31/3/00 GWL

; Entry: E'H'L'=far pointer
;        HL=word

;
; $Id: lp_pint.asm,v 1.3 2015/01/19 01:32:43 pauloscustodio Exp $
;

        PUBLIC    lp_pint

        EXTERN     farseg1,incfar


.lp_pint
        ld      a,($04d1)
	ex	af,af'
        push    hl
        pop     ix
        exx
        ld      b,h
        ld      c,l
        call    farseg1
        ld      a,ixl
        ld      (hl),a
        call    incfar
        ld      a,ixh
        ld      (hl),a
        ex	af,af'
        ld      ($04d1),a
        out     ($d1),a
        ret


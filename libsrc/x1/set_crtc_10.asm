;
;	Sharp X1 specific routines
;   Set 14 6845 CRTC registers at once
;
;	void set_crtc(void *reg_list);
;
;	Set 16 6845 CRTC registers at once
;
;	$Id: set_crtc_10.asm,v 1.2 2015/01/19 01:33:25 pauloscustodio Exp $
;

	PUBLIC	set_crtc_10
	

set_crtc_10:
; __FASTCALL__ : CRTC table ptr in HL

		LD DE,000Ah	
		LD BC,1800h		; CRTC
setout:
		OUT (C),D
		INC BC
		LD A,(HL)
		OUT (C),A
		DEC BC
		INC HL
		INC D
		DEC E
		JR NZ,setout
		RET


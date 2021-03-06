
; DRAW LOAD SPRITE 1 BYTE DEFINITION ROTATED, ON RIGHT BORDER
; 01.2006 aralbrec, Sprite Pack v3.0
; sinclair spectrum version

INCLUDE "clib_target_cfg.asm"

SECTION code_clib
SECTION code_temp_sp1

PUBLIC _SP1_DRAW_LOAD1RB

EXTERN _SP1_DRAW_LOAD1LB
EXTERN SP1RETSPRDRAW

; following data segment copied into struct sp1_cs

   ld de,0
   nop
   ld hl,0
   call _SP1_DRAW_LOAD1RB

; following draw code called by way of SP1UpdateNow
;
;  a = hor rot table
; bc = graphic disp
; de = graphic def ptr
; hl = left graphic def ptr
;
; 46 + 33*8 - 6 + 10 = 314 cycles

_SP1_DRAW_LOAD1RB:

   cp SP1V_ROTTBL/256
   jp z, SP1RETSPRDRAW

   add hl,bc
   ld d,a
   inc d

   ;  d = shift table
   ; hl = left sprite def (graph only)

_SP1Load1RBRotate:

   jp _SP1_DRAW_LOAD1LB + 7

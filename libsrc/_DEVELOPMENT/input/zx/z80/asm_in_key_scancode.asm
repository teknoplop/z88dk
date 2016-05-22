
; ===============================================================
; Sep 2005
; ===============================================================
; 
; uint16_t in_key_scancode(int c)
;
; Return a 16-bit scancode corresponding to char c.  The scancode
; encodes information on how to quickly detect if the key
; corresponding to char c is pressed on the keyboard.
;
; ===============================================================

SECTION code_clib
SECTION code_input

PUBLIC asm_in_key_scancode

EXTERN in_key_translation_table, error_einval_zc

asm_in_key_scancode:

   ; enter :  l = char c
   ;
   ; exit  : success
   ;
   ;            hl = scancode
   ;                 l = key row
   ;                 h = mask, bit 6 set for sym, bit 7 set for cap
   ;            carry reset
   ;
   ;         fail if char cannot be generated by keypress
   ;
   ;            hl = 0
   ;            carry set, errno = EINVAL
   ;
   ; uses   : af, bc, de, hl
   
   ld a,l                      ; a = char c
   
   ld hl,in_key_translation_table
   ld bc,160
   
   cpir                        ; find char in table
   jp nz, error_einval_zc      ; if not found
   
   ld a,159
   sub c                       ; a = index of char in table
   
   ld h,b
   
   ; determine shift state

symbol_shift:

   cp 80
   jr c, cap_shift
   
   sub 80
   set 6,h

cap_shift:

   cp 40
   jr c, key_bit
   
   sub 40
   set 7,h

   ; determine key row and bit position

key_bit:
divide_5:

   inc b
   sub 5
   jr nc, divide_5

   add a,6                     ; a = bit position + 1, b = key row + 1
   
   ld l,$7f

row_loop:

   rlc l
   djnz row_loop

   ld b,a
   ld a,$80

mask_loop:

   rlca
   djnz mask_loop
   
   ld h,a
   
   or a
   ret

; 05.2005 aralbrec

; 'call JPHL' shows up so often that a jp(hl) function
; needs to be part of the z80 library.

PUBLIC l_jphl

.l_jphl
   jp (hl)


// automatically generated by m4 from headers in proto subdir


#ifndef _INPUT_ZX_H
#define _INPUT_ZX_H

#include <stdint.h>

////////////
// joysticks
////////////

extern uint16_t in_stick_cursor(void);


extern uint16_t in_stick_fuller(void);


extern uint16_t in_stick_kempston(void);


extern uint16_t in_stick_sinclair1(void);


extern uint16_t in_stick_sinclair2(void);



////////
// mouse
////////

extern void in_mouse_amx_init(uint16_t x_vector,uint16_t y_vector);
extern void in_mouse_amx_init_callee(uint16_t x_vector,uint16_t y_vector) __z88dk_callee;
#define in_mouse_amx_init(a,b) in_mouse_amx_init_callee(a,b)


extern void in_mouse_amx_reset(void);


extern void in_mouse_amx_setpos(uint16_t x,uint16_t y);
extern void in_mouse_amx_setpos_callee(uint16_t x,uint16_t y) __z88dk_callee;
#define in_mouse_amx_setpos(a,b) in_mouse_amx_setpos_callee(a,b)


extern void in_mouse_amx(uint8_t *buttons,uint16_t *x,uint16_t *y);
extern void in_mouse_amx_callee(uint8_t *buttons,uint16_t *x,uint16_t *y) __z88dk_callee;
#define in_mouse_amx(a,b,c) in_mouse_amx_callee(a,b,c)


extern uint16_t in_mouse_amx_wheel(void);


extern int16_t in_mouse_amx_wheel_delta(void);



extern void in_mouse_kempston_init(void);


extern void in_mouse_kempston_reset(void);


extern void in_mouse_kempston_setpos(uint16_t x,uint16_t y);
extern void in_mouse_kempston_setpos_callee(uint16_t x,uint16_t y) __z88dk_callee;
#define in_mouse_kempston_setpos(a,b) in_mouse_kempston_setpos_callee(a,b)


extern void in_mouse_kempston(uint8_t *buttons,uint16_t *x,uint16_t *y);
extern void in_mouse_kempston_callee(uint8_t *buttons,uint16_t *x,uint16_t *y) __z88dk_callee;
#define in_mouse_kempston(a,b,c) in_mouse_kempston_callee(a,b,c)


extern uint16_t in_mouse_kempston_wheel(void);


extern int16_t in_mouse_kempston_wheel_delta(void);



#endif

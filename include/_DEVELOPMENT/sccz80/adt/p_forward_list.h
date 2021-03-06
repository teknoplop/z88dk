
// automatically generated by m4 from headers in proto subdir


#ifndef _ADT_P_FORWARD_LIST_H
#define _ADT_P_FORWARD_LIST_H

#include <stddef.h>

// DATA STRUCTURES

typedef void* p_forward_list_t;

extern void __LIB__ __FASTCALL__ *p_forward_list_back(p_forward_list_t *ls);


extern void __LIB__ __FASTCALL__ p_forward_list_clear(p_forward_list_t *ls);


extern int __LIB__ __FASTCALL__ p_forward_list_empty(p_forward_list_t *ls);


extern void __LIB__ __FASTCALL__ *p_forward_list_front(p_forward_list_t *ls);


extern void __LIB__ __FASTCALL__ p_forward_list_init(void *p);


extern void __LIB__ *p_forward_list_insert_after(void *ls_item,void *item);
extern void __LIB__ __CALLEE__ *p_forward_list_insert_after_callee(void *ls_item,void *item);
#define p_forward_list_insert_after(a,b) p_forward_list_insert_after_callee(a,b)


extern void __LIB__ __FASTCALL__ *p_forward_list_next(void *item);


extern void __LIB__ __FASTCALL__ *p_forward_list_pop_back(p_forward_list_t *ls);


extern void __LIB__ __FASTCALL__ *p_forward_list_pop_front(p_forward_list_t *ls);


extern void __LIB__ *p_forward_list_prev(p_forward_list_t *ls,void *item);
extern void __LIB__ __CALLEE__ *p_forward_list_prev_callee(p_forward_list_t *ls,void *item);
#define p_forward_list_prev(a,b) p_forward_list_prev_callee(a,b)


extern void __LIB__ p_forward_list_push_back(p_forward_list_t *ls,void *item);
extern void __LIB__ __CALLEE__ p_forward_list_push_back_callee(p_forward_list_t *ls,void *item);
#define p_forward_list_push_back(a,b) p_forward_list_push_back_callee(a,b)


extern void __LIB__ p_forward_list_push_front(p_forward_list_t *ls,void *item);
extern void __LIB__ __CALLEE__ p_forward_list_push_front_callee(p_forward_list_t *ls,void *item);
#define p_forward_list_push_front(a,b) p_forward_list_push_front_callee(a,b)


extern void __LIB__ *p_forward_list_remove(p_forward_list_t *ls,void *item);
extern void __LIB__ __CALLEE__ *p_forward_list_remove_callee(p_forward_list_t *ls,void *item);
#define p_forward_list_remove(a,b) p_forward_list_remove_callee(a,b)


extern void __LIB__ __FASTCALL__ *p_forward_list_remove_after(void *ls_item);


extern size_t __LIB__ __FASTCALL__ p_forward_list_size(p_forward_list_t *ls);



#endif


// automatically generated by m4 from headers in proto subdir


#ifndef _STRING_H
#define _STRING_H

#include <stddef.h>

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int  size_t;
#endif

#ifndef NULL
#define NULL            ((void*)(0))
#endif

extern int __LIB__ bcmp(void *b1,void *b2,size_t len);
extern int __LIB__ __CALLEE__ bcmp_callee(void *b1,void *b2,size_t len);
#define bcmp(a,b,c) bcmp_callee(a,b,c)


extern void __LIB__ bcopy(const void *src,void *dst,size_t len);
extern void __LIB__ __CALLEE__ bcopy_callee(const void *src,void *dst,size_t len);
#define bcopy(a,b,c) bcopy_callee(a,b,c)


extern void __LIB__ bzero(void *mem,size_t n);
extern void __LIB__ __CALLEE__ bzero_callee(void *mem,size_t n);
#define bzero(a,b) bzero_callee(a,b)


extern char __LIB__ *index(char *s,int c);
extern char __LIB__ __CALLEE__ *index_callee(char *s,int c);
#define index(a,b) index_callee(a,b)


extern char __LIB__ *rindex(char *s,int c);
extern char __LIB__ __CALLEE__ *rindex_callee(char *s,int c);
#define rindex(a,b) rindex_callee(a,b)


extern char __LIB__ *strset(char *s,int c);
extern char __LIB__ __CALLEE__ *strset_callee(char *s,int c);
#define strset(a,b) strset_callee(a,b)


extern char __LIB__ *strnset(char *s,int c,size_t n);
extern char __LIB__ __CALLEE__ *strnset_callee(char *s,int c,size_t n);
#define strnset(a,b,c) strnset_callee(a,b,c)


extern void __LIB__ *rawmemchr(const void *mem,int c);
extern void __LIB__ __CALLEE__ *rawmemchr_callee(const void *mem,int c);
#define rawmemchr(a,b) rawmemchr_callee(a,b)



extern char __LIB__ *_memlwr_(void *p,size_t n);
extern char __LIB__ __CALLEE__ *_memlwr__callee(void *p,size_t n);
#define _memlwr_(a,b) _memlwr__callee(a,b)


extern char __LIB__ *_memstrcpy_(void *p,char *s,size_t n);
extern char __LIB__ __CALLEE__ *_memstrcpy__callee(void *p,char *s,size_t n);
#define _memstrcpy_(a,b,c) _memstrcpy__callee(a,b,c)


extern char __LIB__ *_memupr_(void *p,size_t n);
extern char __LIB__ __CALLEE__ *_memupr__callee(void *p,size_t n);
#define _memupr_(a,b) _memupr__callee(a,b)


extern char __LIB__ __FASTCALL__ *_strrstrip_(char *s);


extern int __LIB__ __FASTCALL__ ffs(int i);


extern int __LIB__ __FASTCALL__ ffsl(long i);


extern void __LIB__ *memccpy(void *dst,void *src,int c,size_t n);
extern void __LIB__ __CALLEE__ *memccpy_callee(void *dst,void *src,int c,size_t n);
#define memccpy(a,b,c,d) memccpy_callee(a,b,c,d)


extern void __LIB__ *memchr(void *s,int c,size_t n);
extern void __LIB__ __CALLEE__ *memchr_callee(void *s,int c,size_t n);
#define memchr(a,b,c) memchr_callee(a,b,c)


extern int __LIB__ memcmp(void *s1,void *s2,size_t n);
extern int __LIB__ __CALLEE__ memcmp_callee(void *s1,void *s2,size_t n);
#define memcmp(a,b,c) memcmp_callee(a,b,c)


extern void __LIB__ *memcpy(void *dst,void *src,size_t n);
extern void __LIB__ __CALLEE__ *memcpy_callee(void *dst,void *src,size_t n);
#define memcpy(a,b,c) memcpy_callee(a,b,c)


extern void __LIB__ *memmem(void *haystack,size_t haystack_len,void *needle,size_t needle_len);
extern void __LIB__ __CALLEE__ *memmem_callee(void *haystack,size_t haystack_len,void *needle,size_t needle_len);
#define memmem(a,b,c,d) memmem_callee(a,b,c,d)


extern void __LIB__ *memmove(void *dst,void *src,size_t n);
extern void __LIB__ __CALLEE__ *memmove_callee(void *dst,void *src,size_t n);
#define memmove(a,b,c) memmove_callee(a,b,c)


extern void __LIB__ *memrchr(void *s,int c,size_t n);
extern void __LIB__ __CALLEE__ *memrchr_callee(void *s,int c,size_t n);
#define memrchr(a,b,c) memrchr_callee(a,b,c)


extern void __LIB__ *memset(void *s,int c,size_t n);
extern void __LIB__ __CALLEE__ *memset_callee(void *s,int c,size_t n);
#define memset(a,b,c) memset_callee(a,b,c)


extern void __LIB__ *memswap(void *s1,void *s2,size_t n);
extern void __LIB__ __CALLEE__ *memswap_callee(void *s1,void *s2,size_t n);
#define memswap(a,b,c) memswap_callee(a,b,c)


extern char __LIB__ *stpcpy(char *dst,char *src);
extern char __LIB__ __CALLEE__ *stpcpy_callee(char *dst,char *src);
#define stpcpy(a,b) stpcpy_callee(a,b)


extern char __LIB__ *stpncpy(char *dst,char *src,size_t n);
extern char __LIB__ __CALLEE__ *stpncpy_callee(char *dst,char *src,size_t n);
#define stpncpy(a,b,c) stpncpy_callee(a,b,c)


extern int __LIB__ strcasecmp(char *s1,char *s2);
extern int __LIB__ __CALLEE__ strcasecmp_callee(char *s1,char *s2);
#define strcasecmp(a,b) strcasecmp_callee(a,b)


extern char __LIB__ *strcat(char *dst,char *src);
extern char __LIB__ __CALLEE__ *strcat_callee(char *dst,char *src);
#define strcat(a,b) strcat_callee(a,b)


extern char __LIB__ *strchr(char *s,int c);
extern char __LIB__ __CALLEE__ *strchr_callee(char *s,int c);
#define strchr(a,b) strchr_callee(a,b)


extern char __LIB__ *strchrnul(char *s,int c);
extern char __LIB__ __CALLEE__ *strchrnul_callee(char *s,int c);
#define strchrnul(a,b) strchrnul_callee(a,b)


extern int __LIB__ strcmp(char *s1,char *s2);
extern int __LIB__ __CALLEE__ strcmp_callee(char *s1,char *s2);
#define strcmp(a,b) strcmp_callee(a,b)


extern int __LIB__ strcoll(char *s1,char *s2);
extern int __LIB__ __CALLEE__ strcoll_callee(char *s1,char *s2);
#define strcoll(a,b) strcoll_callee(a,b)


extern char __LIB__ *strcpy(char *dst,char *src);
extern char __LIB__ __CALLEE__ *strcpy_callee(char *dst,char *src);
#define strcpy(a,b) strcpy_callee(a,b)


extern size_t __LIB__ strcspn(char *s,char *nspn);
extern size_t __LIB__ __CALLEE__ strcspn_callee(char *s,char *nspn);
#define strcspn(a,b) strcspn_callee(a,b)


extern char __LIB__ __FASTCALL__ *strdup(char *s);


extern char __LIB__ __FASTCALL__ *strerror(int errnum);


extern int __LIB__ stricmp(char *s1,char *s2);
extern int __LIB__ __CALLEE__ stricmp_callee(char *s1,char *s2);
#define stricmp(a,b) stricmp_callee(a,b)


extern size_t __LIB__ strlcat(char *dst,char *src,size_t n);
extern size_t __LIB__ __CALLEE__ strlcat_callee(char *dst,char *src,size_t n);
#define strlcat(a,b,c) strlcat_callee(a,b,c)


extern size_t __LIB__ strlcpy(char *dst,char *src,size_t n);
extern size_t __LIB__ __CALLEE__ strlcpy_callee(char *dst,char *src,size_t n);
#define strlcpy(a,b,c) strlcpy_callee(a,b,c)


extern size_t __LIB__ __FASTCALL__ strlen(char *s);


extern char __LIB__ __FASTCALL__ *strlwr(char *s);


extern int __LIB__ strncasecmp(char *s1,char *s2,size_t n);
extern int __LIB__ __CALLEE__ strncasecmp_callee(char *s1,char *s2,size_t n);
#define strncasecmp(a,b,c) strncasecmp_callee(a,b,c)


extern char __LIB__ *strncat(char *dst,char *src,size_t n);
extern char __LIB__ __CALLEE__ *strncat_callee(char *dst,char *src,size_t n);
#define strncat(a,b,c) strncat_callee(a,b,c)


extern char __LIB__ *strnchr(char *s,size_t n,int c);
extern char __LIB__ __CALLEE__ *strnchr_callee(char *s,size_t n,int c);
#define strnchr(a,b,c) strnchr_callee(a,b,c)


extern int __LIB__ strncmp(char *s1,char *s2,size_t n);
extern int __LIB__ __CALLEE__ strncmp_callee(char *s1,char *s2,size_t n);
#define strncmp(a,b,c) strncmp_callee(a,b,c)


extern char __LIB__ *strncpy(char *dst,char *src,size_t n);
extern char __LIB__ __CALLEE__ *strncpy_callee(char *dst,char *src,size_t n);
#define strncpy(a,b,c) strncpy_callee(a,b,c)


extern char __LIB__ *strndup(char *s,size_t n);
extern char __LIB__ __CALLEE__ *strndup_callee(char *s,size_t n);
#define strndup(a,b) strndup_callee(a,b)


extern int __LIB__ strnicmp(char *s1,char *s2,size_t n);
extern int __LIB__ __CALLEE__ strnicmp_callee(char *s1,char *s2,size_t n);
#define strnicmp(a,b,c) strnicmp_callee(a,b,c)


extern size_t __LIB__ strnlen(char *s,size_t max_len);
extern size_t __LIB__ __CALLEE__ strnlen_callee(char *s,size_t max_len);
#define strnlen(a,b) strnlen_callee(a,b)


extern char __LIB__ strpbrk(char *s,char *set);
extern char __LIB__ __CALLEE__ strpbrk_callee(char *s,char *set);
#define strpbrk(a,b) strpbrk_callee(a,b)


extern char __LIB__ *strrchr(char *s,int c);
extern char __LIB__ __CALLEE__ *strrchr_callee(char *s,int c);
#define strrchr(a,b) strrchr_callee(a,b)


extern size_t __LIB__ strrcspn(char *s,char *set);
extern size_t __LIB__ __CALLEE__ strrcspn_callee(char *s,char *set);
#define strrcspn(a,b) strrcspn_callee(a,b)


extern char __LIB__ __FASTCALL__ *strrev(char *s);


extern size_t __LIB__ strrspn(char *s,char *set);
extern size_t __LIB__ __CALLEE__ strrspn_callee(char *s,char *set);
#define strrspn(a,b) strrspn_callee(a,b)


extern char __LIB__ __FASTCALL__ *strrstrip(char *s);


extern char __LIB__ *strsep(char **s,char *delim);
extern char __LIB__ __CALLEE__ *strsep_callee(char **s,char *delim);
#define strsep(a,b) strsep_callee(a,b)


extern size_t __LIB__ strspn(char *s,char *pfx);
extern size_t __LIB__ __CALLEE__ strspn_callee(char *s,char *pfx);
#define strspn(a,b) strspn_callee(a,b)


extern char __LIB__ *strstr(char *s,char *subs);
extern char __LIB__ __CALLEE__ *strstr_callee(char *s,char *subs);
#define strstr(a,b) strstr_callee(a,b)


extern char __LIB__ __FASTCALL__ *strstrip(char *s);


extern char __LIB__ *strtok(char *s,char *delim);
extern char __LIB__ __CALLEE__ *strtok_callee(char *s,char *delim);
#define strtok(a,b) strtok_callee(a,b)


extern char __LIB__ *strtok_r(char *s,char *delim,char **last_s);
extern char __LIB__ __CALLEE__ *strtok_r_callee(char *s,char *delim,char **last_s);
#define strtok_r(a,b,c) strtok_r_callee(a,b,c)


extern char __LIB__ __FASTCALL__ *strupr(char *s);


extern size_t __LIB__ strxfrm(char *dst,char *src,size_t n);
extern size_t __LIB__ __CALLEE__ strxfrm_callee(char *dst,char *src,size_t n);
#define strxfrm(a,b,c) strxfrm_callee(a,b,c)



#ifdef __SDCC

   #ifndef __SDCC_DISABLE_BUILTIN

   #undef memcpy
   #undef strcpy
   #undef strncpy
   #undef strchr
   #undef memset

   #define memcpy(dst, src, n)          __builtin_memcpy(dst, src, n)
   #define strcpy(dst, src)             __builtin_strcpy(dst, src)
   #define strncpy(dst, src, n)         __builtin_strncpy(dst, src, n)
   #define strchr(s, c)                 __builtin_strchr(s, c)
   #define memset(dst, c, n)            __builtin_memset(dst, c, n)

   #endif

#endif

#endif

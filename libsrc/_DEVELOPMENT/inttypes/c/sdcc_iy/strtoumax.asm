
; uintmax_t strtoumax(const char *nptr, char **endptr, int base)

SECTION code_clib
SECTION code_inttypes

PUBLIC _strtoumax

EXTERN _strtoul

defc _strtoumax = _strtoul

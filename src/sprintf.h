#ifndef SPRINTF_H__
#define SPRINTF_H__ 1

#include "driver.h"
#include "typedefs.h" 

extern svalue_t *f_printf(svalue_t *sp, int num_arg);
extern svalue_t *f_sprintf(svalue_t *sp, int num_arg);

#endif /* SPRINTF_H__ */

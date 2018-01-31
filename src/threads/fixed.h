#ifndef _THREADS_FIXED_REAL_H
#define _THREADS_FIXED_REAL_H
#endif
#include <stdint.h>

#define P 17
#define Q 14
#define SHIFT 1 << Q

typedef long long int fp_t;

#define INT_TO_REAL (NUM) (SHIFT * NUM)

#define REAL_TO_INT_RZ (REAL) (REAL / SHIFT)

#define REAL_TO_INT_RN (REAL) (REAL >=0 ? (((REAL) + SHIFT / 2) / SHIFT)\
                                          (((REAL) - SHIFT / 2) / SHIFT))

#define ADD_FIX (X, Y) (X + Y)
#define SUB_FIX (X, Y) (X - Y)

#define ADD_INT_TO_FIX (X, NUM) ((X) + ((NUM) * SHIFT))
#define SUB_INT_TO_FIX (X, NUM) ((X) - ((NUM) * SHIFT))

#define MUL_FIX (X, Y) (((int64_t) X) * (Y / SHIFT))
#define MUL_INT (X, NUM) (((int64_t) X) * NUM)

#define DIV_FIX (X, Y) ( (fp_t) ((int64_t)X) * SHIFT) /(Y))

#define DIV_INT (X, NUM)  (X / NUM)


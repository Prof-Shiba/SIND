#pragma once

/*  _____                       */
/* |_   _|   _ _ __   ___  ___  */
/*   | || | | | '_ \ / _ \/ __| */
/*   | || |_| | |_) |  __/\__ \ */
/*   |_| \__, | .__/ \___||___/ */
/*       |___/|_|               */

#if !defined(TYPES_H)
#define TYPES_H

typedef char                i8;
typedef unsigned char       u8;
typedef short               i16;
typedef unsigned short      u16;
typedef int                 i32;
typedef unsigned int        u32;
typedef float               f32;
typedef double              f64;
typedef long long           i64;
typedef unsigned long long  u64;
typedef unsigned char       boolean;

#if !defined(TRUE)
#define TRUE 1
#endif

#if !defined(FALSE)
#define FALSE 0
#endif

#endif

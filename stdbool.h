#ifndef _MSC_VER // [
#error "Use this header only with Microsoft Visual C++ compilers!"
#endif // _MSC_VER ]

#ifndef _MSC_STDBOOL_H_
#define _MSC_STDBOOL_H_

/**
 * \file stdbool.h
 * \brief stdbool.h standard header
 *
 * Uses the version from the compiler unless C99 is not supported.
 *
 * This header provides the following definitions:
 *
 * - The `bool` type.
 * 	+ A standard boolean type. Variables of this type should only contain the value `true` or `false`.
 * - The `true` constant defined as 1.
 * - The `false` constant defined as 0.
 *
 **/

/* emulate stdbool for MSVC versions that don't support it */ 
#if defined(_MSC_VER) && _MSC_VER < 1800 /* before VS2013 */

/* don't define a bool type if compiling for C++ since it already exists */
#ifndef __cplusplus

/**
* \typedef bool
* \brief A standard boolean type. Variables of this type should only contain the value true or false.
**/
typedef int bool;

/** Definition of the true constant. */ 
#define true 1

/** Definition of the false constant. */ 
#define false 0

/** Signal that all the definitions are present. */ 
#define __bool_true_false_are_defined 1

#endif

#else

/* use the one provided by the compiler */
#include <stdbool.h>

#endif

#endif

/*	$NetBSD: stdarg.h,v 1.12 1995/12/25 23:15:31 mycroft Exp $	*/

#ifndef JOS_INC_STDARG_H
#define	JOS_INC_STDARG_H

typedef __builtin_va_list va_list;
/* last is  identifier naming the rightmost parameter in the variable parameter list in the function definition (the one just before the , ... )
initializes ap for subsequent use by the functions va_arg and va_end. 
*/
#define va_start(ap, last) __builtin_va_start(ap, last)

#define va_arg(ap, type) __builtin_va_arg(ap, type)  /*Each call to this macro will extract the next argument from the argument list as a value of the specified type.*/

#define va_end(ap) __builtin_va_end(ap) /*When all the arguments have been processed, the va_end function should be called.*/

#endif	/* !JOS_INC_STDARG_H */

#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

/* function that points to formating functions */
int (*f_select(char s))(va_list);

/*helper functions*/
int _strlen(const char *s);
void _rev(char *);
char *_itoa(int, char *);
int _wIntStr(char *istr);
char *_revr(char *str);

/* format functions */
int _wchar(va_list);
int _wstr(va_list);
int _wd(va_list);
int _wcent(__attribute__ ((unused)) va_list list);
int _wrev(va_list list);

/**
 * struct data_types - the types of data we can have
 * @c: char data type
 * @fptr: string data type
 */
typedef struct data_types
{
	char c;
	int (*fptr) (va_list);
}f_mod;

/* core functions */
int _printf(const char *format, ...);

#endif /* _HOLBERTON_H_ */

#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

<<<<<<< HEAD

#define UNUSED(X) (void)(x)
#define BUFF_SIZE 1024

/******* FLAGS *******/

=======
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

<<<<<<< HEAD
/******* SIZE *******/

=======
/* SIZES */
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
#define S_LONG 2
#define S_SHORT 1

/**
<<<<<<< HEAD
 * strunct fmt - strunct option with it's own argument.
 *
 * @fmt: The formated flag.
 * @fn: The function associated with the argument.
 */

struct fmt
{
        char fmt;
        int (*fn)(va_list, char[], int, int, int, int);
}

/**
 * typedef struct fmt fmt_t - struct option with it's own argument.
 *
 * @fmt: The formated flag.
* @fm_t: The function associated with the argument.
 */

typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int _printf(const char *format, ...);
int handle_print(coonst char *fmt, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);

/******* FUNCTIONS *******/

/**
 *  Functions to be printed the chars and strings.
 */

int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);

/**
 * Functions should have to print the numbers.
 */

int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa(va_list types, char buffer[], int flags, int width, int precision, int size);

/**
 * Function to print non printable characters
 */

int print_non_printable(va_list types, char buffer[], int flags, int width, int precision, int size);

/**
 * Function to be print the memory address.
 */

int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size);

/**
 * Function to be handle the other specifiers.
 */

=======
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Functions to print numbers */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

<<<<<<< HEAD
/**
 * Function to be print strings in the reverse
 */

int print_reverse(va_list types, char buffer[], int flags, int width, int precision, int size);

/**
 * Function to be print a string in the rot 13
 */

int print_rot13string(va_list types, char buffer[], int flags, int width, int precision, int size);

/******* width handler *******/

int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size);
int write_number(int is_posetive, int ind, char buffer[], int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);
int write_pointer(char bufer[], int ind, int length, int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);

/******* UTILS *******/

=======
/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

/****************** UTILS ******************/
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif /* MAIN_H */
<<<<<<< HEAD
=======

>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a

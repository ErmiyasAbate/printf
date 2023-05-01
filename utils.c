#include "main.h"

/**
<<<<<<< HEAD
 * is_printable - evaluates if the char is possible to print.
 * @c: The character to be evaluated
=======
 * is_printable - Evaluates if a char is printable
 * @c: Char to be evaluated.
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 *
 * Return: 1 if c is possible to print, 0 otherwise.
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
<<<<<<< HEAD
 * append_hexa_code - Append ascci in the hexadecimal code to buffer.
 * @buffer: The array of the characters.
 * @i: index.
 * @ascii_code: The ASSCI CODE.
 * Return: return always 3.
=======
 * append_hexa_code - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
<<<<<<< HEAD
        char map_to[] = "0123456789ABCDEF";

        /* The hexa format code is to be 2 digits long always */

        if (ascii_code < 0)
                ascii_code *= -1;
=======
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
<<<<<<< HEAD
 * is_digit - It verifies if a chararcter is a digit.
 * @c: char to be evalutated by the arguments.
=======
 * is_digit - Verifies if a char is a digit
 * @c: Char to be evaluated
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 *
 * Return: return 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
<<<<<<< HEAD
 * convert_size_number - It casts a number to the specified size.
 * @num: The number to be casted
 * @size: The number indicates the type to be casted
 *
 * Return: casted value of number.
=======
 * convert_size_number - Casts a number to the specified size
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
<<<<<<< HEAD
 * convert_size_unsgnd - It casts a number to the specified size.
 * @num: The number to be casted. 
 * @size: The number indicating the type to be casted.
 *
 * Return: casted value of number.
=======
 * convert_size_unsgnd - Casts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value of num
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}


#include "main.h"

/**
 * is_printable - evaluates if the char is possible to print.
 * @c: The character to be evaluated
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
 * append_hexa_code - Append ascci in the hexadecimal code to buffer.
 * @buffer: The array of the characters.
 * @i: index.
 * @ascii_code: The ASSCI CODE.
 * Return: return always 3.
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
        char map_to[] = "0123456789ABCDEF";

        /* The hexa format code is to be 2 digits long always */

        if (ascii_code < 0)
                ascii_code *= -1;

        buffer[i++] = '\\';
        buffer[i++] = 'x';

buffer[i++] = map_to[ascii_code / 16];
        buffer[i] = map_to[ascii_code % 16];

        return (3);
}

/**
 * is_digit - It verifies if a chararcter is a digit.
 * @c: char to be evalutated by the arguments.
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
 * convert_size_number - It casts a number to the specified size.
 * @num: The number to be casted
 * @size: The number indicates the type to be casted
 *
 * Return: casted value of number.
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
 * convert_size_unsgnd - It casts a number to the specified size.
 * @num: The number to be casted. 
 * @size: The number indicating the type to be casted.
 *
 * Return: casted value of number.
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
        if (size == S_LONG)
                return (num);
        else if (size == S_SHORT)
                return ((unsigned short)num);

        return((unsigned int)num);
}

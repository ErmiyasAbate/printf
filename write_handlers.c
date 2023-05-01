#include "main.h"

<<<<<<< HEAD
/******* THE WRITE HANDLE *******/

/**
 * handle_write_char - string printed.
 * @c:The character
 * @buffer: The array to be handle print by buffer.
 * @flags: Calculates the active flags
 * @width: get the width.
 * @precision: specifier of precision.
 * @size: specifier of size.
=======
/************************* WRITE HANDLE *************************/
/**
 * handle_write_char - Prints a string
 * @c: char types.
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags.
 * @width: get width.
 * @precision: precision specifier
 * @size: Size specifier
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 *
 * Return: The number of characters to be printed.
 */
<<<<<<< HEAD

int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size)
{ /* Character is stored at left and paddind */
        int i = 0;
        char padd = ' ';
=======
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size)
{ /* char is stored at left and paddind at buffer's right */
	int i = 0;
	char padd = ' ';
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a

	UNUSED(precision);
	UNUSED(size);

	if (flags & F_ZERO)
		padd = '0';

	buffer[i++] = c;
	buffer[i] = '\0';

	if (width > 1)
	{
		buffer[BUFF_SIZE - 1] = '\0';
		for (i = 0; i < width - 1; i++)
			buffer[BUFF_SIZE - i - 2] = padd;

		if (flags & F_MINUS)
			return (write(1, &buffer[0], 1) +
					write(1, &buffer[BUFF_SIZE - i - 1], width - 1));
		else
			return (write(1, &buffer[BUFF_SIZE - i - 1], width - 1) +
					write(1, &buffer[0], 1));
	}

	return (write(1, &buffer[0], 1));
}

<<<<<<< HEAD
/******* WRITE NUMBER *******/

/**
 * write_number - prints a string with it's argument
 * @is_negative: The listed of arguments
 * @ind: Types of character.
 * @buffer: Buffer array to be  handle the print.
 * @flags: Calculating the active flags
 * @width: get the width.
 * @precision: Specifier of precision.
 * @size: speccifier of size
=======
/************************* WRITE NUMBER *************************/
/**
 * write_number - Prints a string
 * @is_negative: Lista of arguments
 * @ind: char types.
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: precision specifier
 * @size: Size specifier
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 *
 * Return: Number of character to be printed.
 */
int write_number(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size)
{
	int length = BUFF_SIZE - ind - 1;
	char padd = ' ', extra_ch = 0;

	UNUSED(size);

	if ((flags & F_ZERO) && !(flags & F_MINUS))
		padd = '0';
	if (is_negative)
		extra_ch = '-';
	else if (flags & F_PLUS)
		extra_ch = '+';
	else if (flags & F_SPACE)
		extra_ch = ' ';

	return (write_num(ind, buffer, flags, width, precision,
		length, padd, extra_ch));
}

/**
<<<<<<< HEAD
 * write_num - write a numbers by using a buffer.
 * @ind: buffer starting index.
 * @buffer: buffer.
 * @flags: falgs.
 * @width: width.
 * @prec: specifier of precision
 * @length: number of length
 * @pado: pading character
 * @extra_c: Extra character
=======
 * write_num - Write a number using a bufffer
 * @ind: Index at which the number starts on the buffer
 * @buffer: Buffer
 * @flags: Flags
 * @width: width
 * @prec: Precision specifier
 * @length: Number length
 * @padd: Pading char
 * @extra_c: Extra char
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 *
 * Return: The number of printed chars.
 */
int write_num(int ind, char buffer[],
	int flags, int width, int prec,
	int length, char padd, char extra_c)
{
<<<<<<< HEAD
        int i, padd_start = 1;

        if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0' && width == 0)
                return (0); /* printf(".Od", 0) ther is no char is printed */
        if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
                buffer[ind] = padd = ' '; /* the width is displayed with padding ' ' */
        if (prec > 0 && prec < length)
                padd = ' ';
        while (prec > length)
                buffer[--ind] = '0', length++;
        if (extra_c != 0)
                length++;
        if (width > length)
        {
for (i = 1; i < width - length + 1; i++)
                        buffer[i] = padd;
                buffer[i] = '\0';
                if (flags & F_MINUS && padd == ' ') /* assign extra character to the left of buffer */
                {
                        if (extra_c)
                                buffer[--ind] = extra_c;
                        return (write(1, &buffer[ind], length) + write(1, &buffer[1], i - 1));
                }
                else if (!(flags & F_MINUS) && padd == ' ') /* extra character to the  left of buffer */
                {
                        if (extra_c)
                                buffer[--ind] = extra_c;
                        return (wrinte(1, &buffer[1], i - 1) + write(1, &buffer[ind], length));
                }
                else if (!(flags & F_MINUS) && padd == '0') /* extra character to the left of padd */
                {
                        if (extra_c)
                                buffer[--padd_start] = extra_c;
                        return (write(1, &buffer[padd_start], i - padd_start) + write(1, &buffer[ind], length - (1 - padd_start)));
                }
        }
        if (extra_c)
                buffer[--ind] = extra_c;
        return (write(1, &buffer[ind], length));
}

/**
 * write_unsgnd - which writes an unsigned numbers.
 * @is_negative: The number indicating if the num is -ve.
 * @ind: buffer starting index.
 * @buffer: Array of charcaters.
 * @flags: specifiers of flags
 * @width: specifiers of width
 * @precision: specifier of precision
* @size: specifier of size
=======
	int i, padd_start = 1;

	if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0' && width == 0)
		return (0); /* printf(".0d", 0)  no char is printed */
	if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
		buffer[ind] = padd = ' '; /* width is displayed with padding ' ' */
	if (prec > 0 && prec < length)
		padd = ' ';
	while (prec > length)
		buffer[--ind] = '0', length++;
	if (extra_c != 0)
		length++;
	if (width > length)
	{
		for (i = 1; i < width - length + 1; i++)
			buffer[i] = padd;
		buffer[i] = '\0';
		if (flags & F_MINUS && padd == ' ')/* Asign extra char to left of buffer */
		{
			if (extra_c)
				buffer[--ind] = extra_c;
			return (write(1, &buffer[ind], length) + write(1, &buffer[1], i - 1));
		}
		else if (!(flags & F_MINUS) && padd == ' ')/* extra char to left of buff */
		{
			if (extra_c)
				buffer[--ind] = extra_c;
			return (write(1, &buffer[1], i - 1) + write(1, &buffer[ind], length));
		}
		else if (!(flags & F_MINUS) && padd == '0')/* extra char to left of padd */
		{
			if (extra_c)
				buffer[--padd_start] = extra_c;
			return (write(1, &buffer[padd_start], i - padd_start) +
				write(1, &buffer[ind], length - (1 - padd_start)));
		}
	}
	if (extra_c)
		buffer[--ind] = extra_c;
	return (write(1, &buffer[ind], length));
}

/**
 * write_unsgnd - Writes an unsigned number
 * @is_negative: Number indicating if the num is negative
 * @ind: Index at which the number starts in the buffer
 * @buffer: Array of chars
 * @flags: Flags specifiers
 * @width: Width specifier
 * @precision: Precision specifier
 * @size: Size specifier
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 *
 * Return: the number of written characters
 */
int write_unsgnd(int is_negative, int ind,
	char buffer[],
	int flags, int width, int precision, int size)
{
<<<<<<< HEAD
        /* Number is stored at the bufer's right and starting at position i */
        int length = BUFF_SIZE - ind - 1, i = 0;
        char padd = ' ';

        UNUSED(is_negative);
        UNUSED(size);

        if (precision == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
                return (0); /* printf(".Od", 0) their is no char is printed */

        if (precision > 0 && precision < length)
                padd = ' ';

        while (precision > length)
        {
                buffer[--ind] = '0';
                length++;
        }

        if ((flags & F_ZERO) && !(flags & F_MINUS))
                padd = '0';

        if (width > length)
        {
                for (i = 0; i < width - length; i++)
                        buffer[i] = padd;

                buffer[i] = '\0';

if (flags & F_MINUS) /* assign extra characters to the left of buffer [buffer>padd] */
                {
                        return (write(1, &buffer[ind], length) + write(1, &buffer[0], i));
                }
                else /* assign extra char to the left of padding [padd>buffer] */
                {
                        return (write(1, &buffer[0], i) + write(1, &buffer[ind], length));
                }
        }

        return (write(1, &buffer[ind], length));
}

/**
 * write_pointer - write a memory address with it's own argument
 * @buffer: The array of charcters
 * @ind: buffer starting index
 * @width: specifier of width
 * @flags: specifier of flags
 * @padd: character representing by the padding.
 * @extra_c: the character representing extra cahracter.
 * @padd_start: The index at which padding should starts.
 *
 * Return: The number of written charts.
=======
	/* The number is stored at the bufer's right and starts at position i */
	int length = BUFF_SIZE - ind - 1, i = 0;
	char padd = ' ';

	UNUSED(is_negative);
	UNUSED(size);

	if (precision == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
		return (0); /* printf(".0d", 0)  no char is printed */

	if (precision > 0 && precision < length)
		padd = ' ';

	while (precision > length)
	{
		buffer[--ind] = '0';
		length++;
	}

	if ((flags & F_ZERO) && !(flags & F_MINUS))
		padd = '0';

	if (width > length)
	{
		for (i = 0; i < width - length; i++)
			buffer[i] = padd;

		buffer[i] = '\0';

		if (flags & F_MINUS) /* Asign extra char to left of buffer [buffer>padd]*/
		{
			return (write(1, &buffer[ind], length) + write(1, &buffer[0], i));
		}
		else /* Asign extra char to left of padding [padd>buffer]*/
		{
			return (write(1, &buffer[0], i) + write(1, &buffer[ind], length));
		}
	}

	return (write(1, &buffer[ind], length));
}

/**
 * write_pointer - Write a memory address
 * @buffer: Arrays of chars
 * @ind: Index at which the number starts in the buffer
 * @length: Length of number
 * @width: Width specifier
 * @flags: Flags specifier
 * @padd: Char representing the padding
 * @extra_c: Char representing extra char
 * @padd_start: Index at which padding should start
 *
 * Return: Number of written chars.
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 */
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start)
{
<<<<<<< HEAD
        int i;

        if (width > length)
        {
                for (i = 3; i < width - length + 3; i++)
                        buffer[i] = padd;
                buffer[i] = '\0';
 if (flags & F_MINUS && padd == ' ') /* assign extra character to the left of buffer */
                {
                        buffer[--ind] = 'x';
                        buffer[--ind] = '0';
                        if (extra_c)
                                buffer[--ind] = extra_c;
                        return (write(1, &buffer[ind], length) + write(1, &buffer[3], i - 3));
                }
                else if (!(flags & F_MINUS) && padd == '0') /* extra char to the left padd */
                {
                        if (extra_c)
                                buffer[--padd_start] = extra_c;
                        buffer[1] = '0';
                        buffer[2] = 'x';
                        return (write(1, &buffer[padd_start], i - padd_start) + write(1, &buffer[ind], length - (1 - padd_start) - 2));
                }
        }
        buffer[--ind] = 'x';
        buffer[--ind] = '0';
        if (extra_c)
                buffer[--ind] = extra_c;
        return (write(1, &buffer[ind], BUFF_SIZE - ind - 1));
=======
	int i;

	if (width > length)
	{
		for (i = 3; i < width - length + 3; i++)
			buffer[i] = padd;
		buffer[i] = '\0';
		if (flags & F_MINUS && padd == ' ')/* Asign extra char to left of buffer */
		{
			buffer[--ind] = 'x';
			buffer[--ind] = '0';
			if (extra_c)
				buffer[--ind] = extra_c;
			return (write(1, &buffer[ind], length) + write(1, &buffer[3], i - 3));
		}
		else if (!(flags & F_MINUS) && padd == ' ')/* extra char to left of buffer */
		{
			buffer[--ind] = 'x';
			buffer[--ind] = '0';
			if (extra_c)
				buffer[--ind] = extra_c;
			return (write(1, &buffer[3], i - 3) + write(1, &buffer[ind], length));
		}
		else if (!(flags & F_MINUS) && padd == '0')/* extra char to left of padd */
		{
			if (extra_c)
				buffer[--padd_start] = extra_c;
			buffer[1] = '0';
			buffer[2] = 'x';
			return (write(1, &buffer[padd_start], i - padd_start) +
				write(1, &buffer[ind], length - (1 - padd_start) - 2));
		}
	}
	buffer[--ind] = 'x';
	buffer[--ind] = '0';
	if (extra_c)
		buffer[--ind] = extra_c;
	return (write(1, &buffer[ind], BUFF_SIZE - ind - 1));
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
}


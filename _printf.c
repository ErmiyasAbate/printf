#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
<<<<<<< HEAD
 * _printf - printf the function with an arguments.
 * @format: Format.
 * Return: Printed characters.
=======
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

<<<<<<< HEAD
        for (i = 0; format && format[i] != '\0'; i++)
        {
                if (format[i] != '%')
                {
                        buffer[buff_ind++] = format[i];
                        if (buff_ind == BUFF_SIZE)
                                print_buffer(buffer, &buff_ind);
                        /* write (1, &format[i], 1); */
                        printed_chars++;
                }
                else
                {
                        print_buffer(buffer, &buff_ind);
                        flags = get_flags(format, &1);
 width = get_width(format, &1, list);
                        pricision = get_precision(format, &1, list);
                        size = get_size(format, &1);
                        ++1;
                        printed = handle_print(format, &1, list, buffer, flags, width, precision, size);
                        if (printed == -1)
                                return (-1);
                        printed_chars += printed;
                }
        }
=======
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
<<<<<<< HEAD
 * print_buffer - prints the contents of the buffer.
 * @buffer: Array of the characters.
 * @buff_ind: Index at which to add next character, wich represents the length.
=======
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
>>>>>>> fdb75939078afe6d568d2563b46ca20da617990a
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}


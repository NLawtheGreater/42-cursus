#include "printf.h"

/*1.start va_list
**2.check if str is NULL, return null if yes
**3.va start
**4.go through str, if not % write character
**5.if % get formatting with get_format_str
**6.If format has content, print format with print function
**7. free the memory after printing*/
int		ft_printf(const char *str, ...)
{
	va_list	ptr;
	char *format;
	int	i;

	if (str == NULL)
		return (NULL);
	va_start(ptr, str);
	i = 0;
	while (str[i] != '\0')
	{
		if( str[i] == '%')
		{
			format = get_format_str(str[i], va_arg ptr, t_format *f);
			if (format)
			{
				i += print_format(ptr, &f);
				free (format);
			}
		}
		else
		{
			write(1, &str[i], 1);
		}
	i++
	}
	va_end(ptr);
	return (i);
}

/*
**1.Start from %, 	give memory allocation to format*/
static char	*get_format_str(const char *str, va_list ptr, t_format *f)
{
	int		i;
	char	*format;

	format = set_format2(NULL, %, 0)
	if (!format)
		return (NULL);
	i = 1;
	reset_format(f);
	while (str[i])
	{
		if (!set_format1(str[i], ptr, f))
		{
			free (format);
			return (NULL);
		}
		format = set_format2(format, str[i], i);
		if (!str)
			return (NULL);
		if (f->type)
			return (format);
		i++;
	}
	free (format);
	return (NULL);
}

static int	print_format(va_list ptr, t_format *f)
{
	char	*converted;
	int		n;

	converted = conversion_type(ptr, f);
	if (f->type == 'c')
		n = print_char(converted, f->width);
	else
		n = print_str(converted, f);
	free(converted);
	return (n);
}
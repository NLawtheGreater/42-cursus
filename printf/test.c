#include "printf.h"

/*Check if character is one of the format types "cspdiuxX%", 
**	using string to string compare*/
int	is_type(char c)
{
	char	*ptr;

	ptr = F_TYPE;
	while (*ptr)
		if (*ptr++ == c)
			return (1);
	return (0);
}

//reset all the formatting record to default(0)
void	reset_format(t_format *f)
{
	f->minus = 0;
	f->plus = 0;
	f->space = 0;
	f->zero = 0;
	f->hash = 0;
	f->dot = 0;
	f->width = 0;
	f->pcs = 0;
	f->type = 0;
}

/*1.Mark different format flags, using defined structure*/
int	set_format1(char c, va_list ptr, t_format *f)
{
	if (f->dot && ft_isdigit(c))
		f->pcs = (f->pcs * 10) + (c - '0');
	else if (is_type(c))
		f->type = c;
	else if (c == '-')
		f->minus = 1;
	else if (c == '+')
		f->plus = 1;
	else if (c == ' ')
		f->space += 1;
	else if (c == '0' && f->width == 0)
		f->zero = 1;
	else if (c == '#')
		f->hash = 1;
	else if (c == '.')
		f->dot = 1;
	else if (ft_isdigit(c))
		f->width = (f->width * 10) + (c - '0');
	else
		return (0);
	return (1);
}

/*1.If start of % string allocate with size i + 2
**2.If continuation after '%' reallocate with size i + 2
**3.Check allocation in both cases
**4.pass character into format*/
char	*set_format2(char *format, char c, int i)
{
	if (!format)
		format = ft_calloc(sizeof(char), i + 2);
	else
		format = ft_realloc(format, i + 2);
	if (!format)
		return (NULL);
	format[i] = c;
	return (format);
}
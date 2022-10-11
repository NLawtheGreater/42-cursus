#include "printf.h"

/*1.Check recorded type in f->type 
**2.if 'c' use conversion_c
**3.if 's' use conversion_s
**4.if 'i' use conversion_i
**5. and so on
**6. and so forth
**7. Also check if no type matches, if so memallocate size 1 char
**	(if fail, return NULL)
*/ 
char	*conversion_type(va_list ptr, t_format *f)
{
	char	*str;

	if (f->type == 'c')
		str = conversion_c(va_arg(ptr, int));
	else if (f->type == 's')
		str = conversion_s(va_arg(ptr, char *));
	else if (f->type == 'p')
		str = conversion_p((unsigned long long) va_arg(ptr, void *));
	else if (f->type == 'i' || f->type == 'd')
		str = conversion_d(va_arg(ptr, int));
	else if (f->type == 'u')
		str = conversion_u(va_arg(ptr, int));
	else if (f->type == 'x')
		str = conversion_x(va_arg(ptr, unsigned int), 0);
	else if (f->type == 'X')
		str = conversion_x(va_arg(ptr, unsigned int), 1);
	else if (f->type == '%')
		str = conversion_c('%');
	else
		str = ft_calloc(sizeof(char), 1);
	if (!str)
		return (NULL);
	return (str);
}


/*1. memallocate for 2 char
**2. put character into *str
*/
char	*conversion_c(char c)
{
	char	*str;

	str = ft_calloc(sizeof(char), 2);
	if (!str)
		return (NULL);
	str[0] = c;
	return (str);
}

/*1.check if string has anything, if yes then allocate strlen character+1
**	if not allocate 7 (*check*).  Check for allocation result.
**2.If there is string copy string to *str to return.
**3.If there is no string copy NULL for 6 locations (*check*)
**4. return *str */
char	*conversion_s(char *s)
{
	char	*str;

	if (s)
		str = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	else
		str = ft_calloc(sizeof(char), 6 + 1);
	if (!str)
		return (NULL);
	if (s)
		str = ft_memcpy(str, s, ft_strlen(s));
	else
		str = ft_memcpy(str, NULL, 6);
	return (str);
}

/*1.Check if ptr is a void pointer, calloc to *pstr the standard empty length + 1
**	and check *pstr allocation
**2.Copy the standard "empty pointer" to *pstr
**	and return.
**3.*check**/
char	*conversion_p(size_t ptr)
{
	char	*hex;
	char	*pstr;

	if (!ptr)
	{
		pstr = ft_calloc(sizeof(char), P_EMPTY_L + 1);
		if (!pstr)
			return (NULL);
		pstr = ft_memcpy(pstr, P_EMPTY, P_EMPTY_L);
		return (pstr);
	}
	pstr = ft_calloc(sizeof(char), 3);
	if (!pstr)
		return (NULL);
	pstr[0] = '0';
	pstr[1] = 'x';
	hex = my_ith(ptr);
	if (!hex)
		return (NULL);
	pstr = my_strcat(pstr, hex);
	if (!pstr)
		return (NULL);
	if (hex)
		free(hex);
	return (pstr);
}

/*1.Use i to a to change integer into string
**2.Store into *str and pass back*/
char	*conversion_d(int d)
{
	char	*str;

	str = ft_itoa(d);
	if (!str)
		return (NULL);
	return (str);
}

/*1.Use u into s function
**2.Check if allocation fails
**3.*/
char	*conversion_u(unsigned int d)
{
	char	*str;

	str = uits(d);
	if (!str)
		return (NULL);
	return (str);
}

/*1.allocate memory equal to length of *check* + 1
**	and check allocation
**2.assign '0' to first position
**3.use modulo of 10 to get *check*

*/
static char	*uits(unsigned int d)
{
	char	*str;
	int		i;

	i = uilen(d) - 1;
	str = ft_calloc(sizeof(char), i + 2);
	if (!str)
		return (NULL);
	str[i + 1] = '\0';
	while (d > 0)
	{
		str[i] = (d % 10) + '0';
		d = d / 10;
		i--;
	}
	return (str);
}

static int	uilen(unsigned int d)
{
	int		i;

	i = 0;
	if (d == 0)
		return (1);
	while (d > 0)
	{
		d = d / 10;
		i++;
	}
	return (i);
}

/*1.use hex convert to convert int to hexadeximal number
**2.If the type is X the hexadecimal number is converted to uppercase*/
char	*conversion_x(unsigned int nb, int is_upper)
{
	char	*hex;

	hex = hexconvert(nb);
	if (!hex)
		return (NULL);
	if (is_upper)
		hex = ft_toupper(hex);
	return (hex);
}

/*1.Find length of hex, counting multiples of 16
**2.Divide by 16*/
static int	hexlen(size_t nb)
{
	int		i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb > 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);

/*1.calloc with count of hexlen + 1
**	and check allocation
**2.*/
char	*hexconvert(size_t nb)
{
	char	*base;
	char	*str;
	int		i;

	base = "0123456789abcdef";
	i	= hexlen(nb) - 1
	str = ft_calloc(sizeof(char), i + 2);
	if (!str)
		return (NULL);
	str[i + 1] = '\0';
	while (nb > 0)
	{
		str[i] = base[nb % 16];
		nb = nb / 16;
		i--;
	}
	return (str);
}


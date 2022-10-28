#include "ft_printf.h"
#include "libft.h"

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

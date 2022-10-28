#include "ft_printf.h"
#include "libft.h"

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

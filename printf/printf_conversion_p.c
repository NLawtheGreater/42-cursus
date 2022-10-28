#include "ft_printf.h"
#include "libft.h"


/*1.Check if ptr is a void pointer, calloc to *pstr the standard 
** empty length + 1 and check *pstr allocation
**2.Copy the standard "empty pointer" to *pstr
**	and return.
**3.*check**/
char	*conversion_p(size_t ptr)
{
	char	*hex;
	char	*prestr;
	char	*pstr;

	/*if (!ptr)
	{
		pstr = ft_calloc(sizeof(char), P_EMPTY_L + 1);
		if (!pstr)
			return (NULL);
		pstr = ft_memcpy(pstr, P_EMPTY, P_EMPTY_L);
		return (pstr);
	}*/
	prestr = ft_calloc(sizeof(char), 3);
	if (!prestr)
		return (NULL);
	prestr[0] = '0';
	prestr[1] = 'x';
	hex = hexconvert(ptr, 0);
	if (!hex)
		return (NULL);
	pstr = ft_strjoin(prestr, hex);
	free(prestr);
	if (hex)
		free(hex);
	if (!pstr)
		return (NULL);
	return (pstr);
}

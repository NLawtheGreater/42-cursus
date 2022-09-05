/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:18:07 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:18:09 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	int				s_len;
	int				offset;
	unsigned int	index;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	offset = d_len;
	index = 0;
	if (size == 0 || size <= d_len)
		return (size + s_len);
	while (src[index] != '\0' && index < (size - d_len - 1))
	{
		dest[offset] = src[index];
		offset++;
		index++;
	}
	dest[offset] = '\0';
	return (d_len + s_len);
}


/*#include <stdio.h>
#include <string.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size);
int	main(void)
{
	char	dest[500] = "wow";
	char	dest1[500] = "wow";
	char	jon[500] = "jon";
	char	jon1[500] = "jon";
	char	test1[] = "";
	char	src[500] = "magnitude";
	char	src1[500] = "magnitude";
		char	test[] = "";
	
	printf ("%lu - %s\n", strlcat( dest1, src1, 7), dest1);
	printf ("%lu - %s\n", strlcat( src1, dest1, 24), src1);
	printf ("%lu - %s\n", strlcat( src1, dest1, 6), src1);
	printf ("%u - %s\n", ft_strlcat( dest, src, 7), dest);
	printf ("%u - %s\n", ft_strlcat( src, dest, 24), src);
	printf ("%u - %s\n", ft_strlcat( src, dest, 6), src);
printf ("%lu - %s\n", strlcat( jon1, test1, 6), jon1);
printf ("%u - %s\n", ft_strlcat( jon, test, 6), jon);
}
*/
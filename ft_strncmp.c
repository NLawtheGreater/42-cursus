/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:17:23 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:17:25 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	main(void)
{
	char	dest[] = "this is Dnd";
	char	dest1[] = "this is Dnd";
	char	src[] = "this is ";
	char	src1[] = "this is ";

printf ("%d\n", ft_strncmp( dest, src, 9));
	printf ("%d\n", ft_strncmp( src, src, 8));
	printf ("%d\n", ft_strncmp( src, dest, 8));
	printf ("%d\n", strncmp( dest1, src1, 9));
	printf ("%d\n", strncmp( src1, src1, 8));
	printf ("%d", strncmp( src1, dest1, 8));
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	k;
	int				result;

	k = 0;
	result = 0;
	while ((s1[k] != '\0' || s2[k] != '\0') && k < n)
	{
		if (s1[k] != s2[k])
		{
			return ((unsigned char) s1[k] - (unsigned char) s2[k]);
		}
		k++;
	}
	return (0);
}


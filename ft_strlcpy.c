/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:18:22 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:18:24 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	k = 0;
	while (src[++k] != '\0')
	{
	}
	k--;
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (k);
	
}

int	main()
{
	char	dest[7];
	char	src[10] = "thank you!";
	char	dest1[7];
	char	src1[10] = "thank you!";

	unsigned int	a = ft_strlcpy(dest, src, 7);
	unsigned int	b = strlcpy (dest1, src1, 7);
	printf("%u\n%s\n", a, dest);
	printf("%u\n%s\n", b, dest1);
}

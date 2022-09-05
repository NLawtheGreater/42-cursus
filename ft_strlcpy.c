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
	while (dest[++k] != '\0')
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
	char	dest;
	char	src[10] = "thank you!";
	unsigned int	i = ft_strlcpy(&dest, &src[0], 7);
	unsigned int	k = strlcpy (&dest, &src[0], 7);

	printf("%u\n%s\n", i, &dest);
	printf("%u\n%s\n", k, &dest);
}
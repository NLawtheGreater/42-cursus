/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:14:56 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:14:58 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			ind;
	unsigned char	check;

	check = c;
	ind = 0;
	while (ind < n)
	{
		if (*(unsigned char *)(s + ind) == check)
			return ((void *)(s + ind));
		ind++;
	}
	return (NULL);
}
//converting c into unsigned char
				//go through *s from beginning
	/*for (ind = 0; ind < n; ind++)
	{
								if (*(unsigned char *)(s+ind) == check)
								{
										return ((void *)(s+ind));
								} 
				}*/
								//check for c (character) 
												//return matching pointer
				//not finding, return NULL
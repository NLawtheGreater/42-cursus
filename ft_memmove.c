/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:15:27 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:15:29 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Synopsis:
	Copies len character from src to dst, through an intermediate
Description:
	memcpy() simply copies data one by one from one location to another. 
	On the other hand memmove() copies the data first to an intermediate buffer, 
	then from the buffer to destination.
memcpy() leads to problems when strings overlap.*/
#include "libft.h"

/*for (ind = 0; ind < len; ind++)
		*temp[ind] = *(char *)(src + ind);
	for (ind = 0; ind < len; ind++)
1. Copy data from src[] to temp[]
2. Copy data from temp[] to dst[]*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	ind;

	ind = 0;
	while (ind < len)
	{
		//temp[ind] = *(char *)(src + ind);
		src = src;
		ind++;
	}
	ind = 0;
	while (ind < len)
	{
		//*(char *)(dst + ind) = temp[ind];
		ind++;
	}
	return (dst);
}


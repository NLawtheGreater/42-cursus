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
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	ind;
	char	temp[len];

	ind = 0;
	while (ind < len)
	{
		temp[ind] = *(char *)(src + ind);
		ind++;
	}
	ind = 0;
	while (ind < len)
	{
		*(char *)(dst + ind) = temp[ind];
		ind++;
	}
	return (dst);
}
/*for (ind = 0; ind < len; ind++)
		*temp[ind] = *(char *)(src + ind);
	for (ind = 0; ind < len; ind++)*/
// Copy data from src[] to temp[]
// Copy data from temp[] to dst[]

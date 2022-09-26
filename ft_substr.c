/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:19:24 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:19:25 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Description:
	Allocates (with malloc(3)) and returns a substring
	from the string ’s’.
	The substring begins at index ’start’ and is of
	maximum size ’len’.
*/
#include "libft.h"
#include <stdio.h>

/*  1.allocates with malloc
    2.NULL if allocation fails
    3.copying to pointer using start as the index and 
    stopping by the end of s or maximum len
    4.add NULL to end substring
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*ptr;

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < len && s[start])
	{
		ptr[j++] = s[start++];
	}
	ptr[j] = '\0';
	return (ptr);
}

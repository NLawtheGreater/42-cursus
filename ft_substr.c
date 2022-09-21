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
#include "libft.h"
#include <stdio.h>

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t j;
    int k;
    char* ptr;
    //allocates with malloc
    ptr = malloc(len*sizeof(char));
    //NULL if allocation fails
    if (*ptr == '\0')
    {
        return('\0');
    }
    //copying to pointer using start as the index and stopping by the end of s or maximum len
    for ( k = (start - 1), j = 0; j < len || !s[k]; k++, j++)       
    {
        ptr[j] = s[k];
    }
     //*check NULL terminate substring?
     return(ptr);
}
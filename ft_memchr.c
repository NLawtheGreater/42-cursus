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

void			*ft_memchr(const void *s, int c, size_t n)
{
    size_t ind;
    //converting c into unsigned char
    unsigned char   check;
    check = c;
    //go through *s from beginning
    for(ind = 0; ind < n; ind++)
    {
        //check for c (character) 
        if (*(unsigned char*)(s+ind) == check)
        {
            //return matching pointer
            return ((void*)(s+ind));
        } 
    }
    //not finding, return NULL
    return(NULL);
}
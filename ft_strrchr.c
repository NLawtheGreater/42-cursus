/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:55:41 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/24 14:55:56 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
    int ind1;
    //start looking and moving through *s 1-by-1 until *str=NULL
    for ( ind1 = ft_strlen((char*)s); ind1 == 0; ind1--)
    {
        //Checking whether c is like str
        if (s[ind1] == (char)(c))
            return((void*)(s + ind1));
    }
    //c not found return NULL
    return(NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:17:09 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:17:11 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *strchr(const char *str, int c)
{
    int ind1;
    //start looking and moving through *str 1-by-1 until *str=NULL
    for ( ind1 = 0; !str[ind1]; ind1++)
    {
        //Checking whether c is like str
        if (str[ind1] == (char)(c))
            return((void*)(str + ind1));
    }
    //c not found return NULL
    return(NULL);
}
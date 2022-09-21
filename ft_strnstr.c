/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:18:42 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:18:43 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//*check ft_strlen
size_t			ft_strlen(const char *s);
char			*ft_strnstr(const char *haystack, \
		const char *needle, size_t len)
        {
            size_t ind1;
            size_t ind2;
            //check if needle is empty string
            if (*needle == 0)
            {
                return((void*)(haystack));
            }
            //start looking and moving through haystack 1-by-1
            for ( ind1 = 0; ind1 < len; ind1++)
            {
                //Checking whether needle is like haystack and moving through the whole line
                while(*(unsigned char*)(haystack + ind1 + ind2) == *(unsigned char*)(needle + ind2) && needle[ind2])
                {
                    ind2++;
                }
                if (needle[ind2] == '\0')
                    return((void*)(haystack + ind1));
                /*for( ind2 = 0; *(unsigned char*)(haystack + ind1 + ind2) != \
                *(unsigned char*)(needle + ind2) || !needle[ind2]; ind2++)
                {
                    //Check that needle was found and return pointer to first occurrence of needle in haystack
                }*/
                ind2 = 0;
            }
            //needle not found return NULL
            return(NULL);
        }
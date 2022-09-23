/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:18:55 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:18:56 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Synopsis:
    Apply any string(pointer) function to a copy of the string s, one char at a time, and returning result string 
** Description:
    Applies the function ’f’ to each character of the
    string ’s’, and passing its index as first argument
    to create a new string (with malloc(3)) resulting
    from successive applications of ’f’.*/

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
	char			*str;

    //return NULL, if s or f is NULL
	if (!s || !f)
		return (NULL);
	//copy string s to str and check allocation
    str = ft_strdup(s);
	if (!str)
		return (NULL);
    //apply function f to str with for loop, then return
	for (i = 0; !str[i]; i++)
	{
		str[i] = (*f)(i, str[i]);
	}
	return (str);
}
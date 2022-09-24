/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:19:03 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:19:04 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** LIBRARY: N/A
** SYNOPSIS: trim beginning and end of string with the specified characters
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a copy of ’s1’ with the
**	characters specified in ’set’ removed from the beginning and the end of the
**	string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

    //return NUll if either argument NULL 
	if (!s1 || !set)
		return (0);
    //search whether ANY ONE of set matches with the S1 using strchr, moves down s1 until there is no match, s1 no match location is recorded
	while (*s1 && ft_strchr(set, *s1))
		s1++;
    //find strlen of s1 from position recorded (start of trim area) to the end of string 
	i = ft_strlen((char*)s1);
    //search whether ANY ONE of set matches with the S1 using strchr, moves up s1 until there is no match, s1 no match location is recorded (end of trim area)
	while (i && ft_strchr(set, s1[i]))
		i--;
    //return trimmed string with substring, substring creates malloc NULL-terminated string
	return (ft_substr(s1, 0, i + 1));
}
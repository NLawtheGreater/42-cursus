/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:13:29 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 16:13:31 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void			*ft_calloc(size_t count, size_t size)
{
    void* ptr;
    //using malloc to allocate memory
    ptr = malloc(count * size);
    //check memory allocation, returns NULL if fail
    if (ptr == NULL)
        return (NULL);
    //using bzero to make zero
    ft_bzero(ptr, (count * size));
    //return void pointer
    return(ptr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:25:31 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/30 13:25:34 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Synopsis:
    Counts the number of ndes in a list.
*/
#include "libft.h"

/*1.assign start of list to ptr
**2.cycle through node pointer with linker, while counting
**3.return count
*/
int ft_lstsize(t_list *lst)
{
	t_list	*ptr;
    int		i;

    ptr = lst;
    while (ptr != 0)
    {
        ptr = ptr->next;
        i++;
    }
    return (i);
	}

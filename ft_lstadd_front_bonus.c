/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:16:45 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/30 13:16:48 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Parameter:
**lst: The address of a pointer to the first link of
**a list.
**Description:
    Adds the node ’new’ at the beginning of the list.
*/
#include "libft.h"

/*1.Check pointers, start with lst
**2.Point *new linker to pointer to the first link of list 
**3.Point *lst linker to new, as it is now the first node
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		if (!lst)
		{
			*lst = new;
			return ;
		}
		new->next = *lst;
		*lst = new;
	}
}

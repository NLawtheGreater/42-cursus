/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:25:04 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/30 13:25:07 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SYNOPSIS
	Return new list or NULL if allocation fails
**DESCRIPTION
    Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*ptr;
	
	while (lst != 0)
	{
		(*f)(lst)
		
	}
	ptr = ft_lstmap;
	if (!ptr)
		return (NULL);
}

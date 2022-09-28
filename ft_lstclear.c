/*Argument:
**lst: The address of a pointer to a node.
**del: The address of the function used to delete
**	the content of the node.
Description:
    Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.
*/
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void
*))
{
	while(lst != 0)
	{
		(*del)(lst);
		free(lst->content);
		lst = lst->next;
	}
	*lst = NULL;
}
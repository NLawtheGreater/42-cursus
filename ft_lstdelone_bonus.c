/*DESCRIPTION
    Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed.
*/
#include "libft.h"
#include <stdlib.h>

/*1.apply del to the node 
**2.Free memory of node, but not 'next'
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst);
	free(lst->content);
}
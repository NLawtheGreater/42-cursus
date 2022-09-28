/*
**Synopsis:
    Returns the last node of the list.
*/
#include "libft.h"

/*1.creating ptr to node given
**2.Travel through node with node linker
**3.ptr->next = NUll for the last node, stop before ptr-> = NULL
	for address of last node.
*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

    ptr = lst;
	while (ptr->next != 0)
        ptr = ptr->next;
    return (ptr);
}
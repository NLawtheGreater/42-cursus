/*
    Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
*/
#include "libft.h"

/*1.create ptr pointer
**2.point ptr to lst
**3.go through ptr->next 
**4.while applying (*f) to each ptr
*/ 
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;
	
	ptr = lst;
	while (ptr->next != 0)
		(*f)(ptr);
        ptr = ptr->next;
}
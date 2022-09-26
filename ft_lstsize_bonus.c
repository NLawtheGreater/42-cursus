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
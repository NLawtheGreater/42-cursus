/*
    Counts the number of ndes in a list.
*/
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *ptr;
    int i;
    //assign start of list to ptr
    ptr = lst
    //cycle through node pointer, while counting
    while (ptr != 0)
    {
        ptr = ptr->next
        i++
    }
    return(i);
}
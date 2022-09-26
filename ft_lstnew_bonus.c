/*
Synopsis:
    start new linked list
Description:
    Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.*/
#include "libft.h"
#include <stdio.h>

/*1.initialize node
**2.memallocate with size of t_list
**3.Fill in content and next, pointing from *head
*/
t_list	*ft_lstnew(void *content)
{
    t_list	*head;

    head = malloc(sizeof(t_list));
    head->content = content;
    head->next = NULL;
	return (head);
}
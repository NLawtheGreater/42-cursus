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

t_list *ft_lstnew(void *content)
{
    //initialize node
    t_list *head;
    //memallocate with size of t_list
    head = malloc(sizeof(t_list));
    //Fill in content and next, pointing from *head
    head->content = *content;
    head->next = NULL;
}
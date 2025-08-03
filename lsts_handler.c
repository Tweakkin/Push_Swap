#include "push_swap.h"

t_stack    *ft_lstlast(t_stack *lst)
{
    t_stack    *lastnode;

    if (!lst)
        return (NULL);
    lastnode = lst;
    while (lastnode->next != NULL)
        lastnode = lastnode->next;
    return (lastnode);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

void    ft_lstadd_back(t_stack **lst, t_stack *new)
{
    t_stack  *last_node;

    if (!lst || !new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    last_node = ft_lstlast(*lst);
    last_node->next = new;
}

t_stack *create_newnode(int value)
{
    t_stack *newnode = malloc(sizeof(t_stack));
    if (!newnode)
        return NULL;
    newnode->value = value;
    newnode->next = NULL;
    return newnode;
}
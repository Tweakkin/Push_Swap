#include "push_swap.h"

t_stack *create_newnode(int value)
{
    t_stack *newnode = malloc(sizeof(t_stack));
    if (!newnode)
        return NULL;
    newnode->value = value;
    newnode->next = NULL;
    return newnode;
}

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
void print_list(t_stack *head) {
    t_stack *current = head;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

int main(int argc, char **argv)
{
    t_stack *a_stack = create_newnode(10);
    ft_lstadd_back(&a_stack, create_newnode(20));
    ft_lstadd_back(&a_stack, create_newnode(30));
    ft_lstadd_back(&a_stack, create_newnode(40));
    print_list(a_stack);
}
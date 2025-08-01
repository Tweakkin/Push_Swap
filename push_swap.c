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

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= 57 && str[i] >= 48)
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * sign);
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
    int i = 1;
    t_stack *a_stack = NULL;
    while (i < argc)
    {
        ft_lstadd_back(&a_stack, create_newnode(ft_atoi(argv[i])));
        i++;
    }
    print_list(a_stack);
}
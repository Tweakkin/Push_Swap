#include "push_swap.h"

int sb(t_data *b_data)
{
    int tmp_value;

    if (!b_data || !b_data->stack || !b_data->stack->next)
        return (0);
    tmp_value = b_data->stack->value;
    b_data->stack->value = b_data->stack->next->value;
    b_data->stack->next->value = tmp_value;
    write(1, "sb\n", 3);
    return(1);
}

int pb(t_data *a_data, t_data *b_data)
{
    t_stack *temp;

    if (!a_data || !a_data->stack)
        return (0);
    temp = a_data->stack;
    a_data->stack = a_data->stack->next;
    ft_lstadd_front(&b_data->stack, temp);
    write(1, "pb\n", 3);
    return (1);
}

int rb(t_data *b_data)
{
    t_stack *temp;

    if (!b_data || !b_data->stack || !b_data->stack->next)
        return (0);
    temp = b_data->stack;
    b_data->stack = b_data->stack->next;
    temp->next = NULL;
    ft_lstadd_back(&b_data->stack, temp);
    write(1, "rb\n", 3);
    return (1);
}

int rrb(t_data *b_data)
{
    t_stack *temp;
    t_stack *last;

    if (!b_data || !b_data->stack || !b_data->stack->next)
        return (0);
    last = ft_lstlast(b_data->stack);
    temp = ft_secondlast(b_data->stack);
    temp->next = NULL;
    ft_lstadd_front(&b_data->stack, last);
    write(1, "rrb\n", 4);
    return (1);
}
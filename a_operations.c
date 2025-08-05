#include "push_swap.h"

int sa(t_data *a_data)
{
    int tmp_value;

    if (!a_data || !a_data->stack || !a_data->stack->next)
        return (0);
    tmp_value = a_data->stack->value;
    a_data->stack->value = a_data->stack->next->value;
    a_data->stack->next->value = tmp_value;
    write(1, "sa\n", 3);
    return(1);
}

int pa(t_data *a_data, t_data *b_data)
{
    t_stack *temp;

    if (!b_data || !b_data->stack)
        return (0);
    temp = b_data->stack;
    b_data->stack = b_data->stack->next;
    ft_lstadd_front(&a_data->stack, temp);
    write(1, "pa\n", 3);
    return (1);
}

int ra(t_data *a_data)
{
    t_stack *temp;

    if (!a_data || !a_data->stack || !a_data->stack->next)
        return (0);
    temp = a_data->stack;
    a_data->stack = a_data->stack->next;
    temp->next = NULL;
    ft_lstadd_back(&a_data->stack, temp);
    write(1, "ra\n", 3);
    return (1);
}

int rra(t_data *a_data)
{
    t_stack *temp;
    t_stack *last;

    if (!a_data || !a_data->stack || !a_data->stack->next)
        return (0);
    last = ft_lstlast(a_data->stack);
    temp = ft_secondlast(a_data->stack);
    temp->next = NULL;
    ft_lstadd_front(&a_data->stack, last);
    write(1, "rra\n", 4);
    return (1);
}
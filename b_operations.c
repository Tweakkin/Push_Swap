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
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

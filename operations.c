#include "push_swap.h"

int ss(t_data *a_data, t_data *b_data)
{
    sa(a_data);
    sb(b_data);
    write(1, "ss\n", 3);
    return (1);
}

int rr(t_data *a_data, t_data *b_data)
{
    ra(a_data);
    rb(b_data);
    write(1, "rr\n", 3);
    return(1);
}

int rrr(t_data *a_data, t_data *b_data)
{
    rra(a_data);
    rrb(b_data);
    write(1, "rrr\n", 4);
    return (1);
}
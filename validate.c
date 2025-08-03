#include "push_swap.h"

void    check_for_duplicates(int num, t_stack *stack)
{
    t_stack *current_node;

    if (!stack)
        return;
    current_node = stack;
    while(current_node != NULL)
    {
        if (num == current_node->value)
            exit_error();
        current_node = current_node->next;
    }
}
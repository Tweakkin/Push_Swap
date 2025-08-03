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

void check_for_emptystring(char *arg)
{
    int i;

    i = 0;
    if (ft_strlen(arg) == 0)
        exit_error();
    else if (ft_strlen(arg) > 0)
    {
        while (i < ft_strlen(arg))
        {
            if (arg[i] != ' ')
                return;
            i++;
        }
    }
    exit_error();
}

void check_for_invalidchar(char *arg)
{
    int i;

    i = 0;
    while (arg[i] != '\0')
    {
        if ((arg[i] >= '0' && arg[i] <= '9') || arg[i] == ' ')
            ;
        else if (arg[i] == '+' || arg[i] == '-')
        {
            if (!(arg[i-1] == ' ' || i == 0) || !(arg[i+1] <= '9' && arg[i+1] >= '0'))
                exit_error();
        }
        else
            exit_error();
        i++;
    }
}

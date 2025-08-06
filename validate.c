#include "push_swap.h"

void    check_for_duplicates(int num, t_stack *stack, t_data *a, t_data *b, char **argv)
{
    t_stack *current_node;

    if (!stack)
        return;
    current_node = stack;
    while(current_node != NULL)
    {
        if (num == current_node->value)
            exit_free(a, b, argv);
        current_node = current_node->next;
    }
}

void check_for_emptystring(char *arg, t_data *a, t_data *b, char **argv)
{
    int i;

    i = 0;
    if (ft_strlen(arg) == 0)
        exit_free(a, b, argv);
    else if (ft_strlen(arg) > 0)
    {
        while (i < ft_strlen(arg))
        {
            if (arg[i] != ' ')
                return;
            i++;
        }
    }
    exit_free(a, b, argv);
}

void check_for_invalidchar(char *arg, t_data *a, t_data *b, char **argv)
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
                exit_free(a, b, argv);
        }
        else
            exit_free(a, b, argv);
        i++;
    }
}

int is_sorted(t_data *a)
{
    t_stack *current_node;

    if (!a || !a->stack)
        return (0);
    current_node = a->stack;
    while (current_node->next != NULL)
    {
        if (current_node->value >= current_node->next->value)
            return(0);
        current_node = current_node->next;
    }
    return (1);
}
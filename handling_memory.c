#include "push_swap.h"

void    free_stack_data(t_data *data)
{
    t_stack *current;
    t_stack *next;

    if(!data)
        return;
    current = data->stack;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    if (data->array)
        free_arr(data->array);
    free(data);
    exit(1);
}

void    free_arr(char **arr)
{
    int i;

    i = 0;
    while (arr[i])
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}

void    exit_free(t_data *a, t_data *b, char **args)
{
    if (a)
        free_stack_data(a);
    if (b)
        free_stack_data(b);
    if (args)
        free_arr(args);
    write(2, "Error\n", 6);
    exit(1);
}
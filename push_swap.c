#include "push_swap.h"

void print_list(t_stack *head) {
    t_stack *current = head;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

void    init_data(t_data **a, t_data **b, char **argv)
{
    *a = malloc(sizeof(t_data));
    if (!*a)
        exit_free(*a, *b, argv);
    (*a)->stack = NULL;
    *b = malloc(sizeof(t_data));
    if (!*b)
        exit_free(*a, *b, argv);
    (*b)->stack = NULL; 
}

void    args_to_arr(t_data *a,t_data *b, int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (i < argc)
    {
        a->array = ft_split(argv[i], ' ');
        check_for_emptystring(argv[i], a, b, argv);
        check_for_invalidchar(argv[i], a, b, argv);
        while (a->array[j] != NULL)
        {
            check_for_duplicates(ft_atoi_safe(a->array[j], a, b, argv), a->stack, a, b, argv);
            ft_lstadd_back(&a->stack, create_newnode(ft_atoi_safe(a->array[j], a, b, argv)));
            j++;
        }
        j = 0;
        i++;   
    }
}

int main(int argc, char **argv)
{
    t_data *a;
    t_data *b;

    if (argc < 2)
        exit(1); 
    init_data(&a, &b, argv);
    args_to_arr(a, b, argc, argv);
    printf("%d", is_sorted(a));
}
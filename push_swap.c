#include "push_swap.h"

void print_list(t_stack *head) {
    t_stack *current = head;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

void exit_error()
{
    exit(1);
}

int main(int argc, char **argv)
{
    t_data *a = malloc(sizeof(t_data));
    t_data *b = malloc(sizeof(t_data));
    int i = 1;
    int j = 0;
    a->stack = NULL;
    b->stack = NULL;
    char **temp_arr;
    if (argc < 2)
        exit_error(); 
    while (i < argc)
    {
        temp_arr = ft_split(argv[i], ' ');
        check_for_emptystring(argv[i]);
        check_for_invalidchar(argv[i]);
        while (temp_arr[j] != NULL)
        {
            check_for_duplicates(ft_atoi_safe(temp_arr[j]), a->stack);
            ft_lstadd_back(&a->stack, create_newnode(ft_atoi_safe(temp_arr[j])));
            j++;
        }
        j = 0;
        i++;
    }
    rrr(a, b);
    print_list(a->stack);
}
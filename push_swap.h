#include <stdlib.h>
#include <stdio.h>


typedef struct s_stack
{
	int value;
	struct s_stack	*next;
}t_stack;

/*typedef struct t_data
{
    t_stack 
}*/

int	ft_atoi(const char *str);
t_stack    *ft_lstlast(t_stack *lst);
t_stack *create_newnode(int value);
void    ft_lstadd_back(t_stack **lst, t_stack *new);
void print_list(t_stack *head);
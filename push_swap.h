#include <stdlib.h>
#include <stdio.h>


typedef struct s_stack
{
	int value;
	struct s_stack	*next;
}t_stack;

typedef struct s_data
{
    t_stack *a_stack;
}t_data;

int	ft_atoi(const char *str);
void exit_error();
t_stack    *ft_lstlast(t_stack *lst);
t_stack *create_newnode(int value);
void print_list(t_stack *head);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void    ft_lstadd_back(t_stack **lst, t_stack *new);
void    check_for_duplicates(int num, t_stack *stack);
char	**ft_split(char const *s, char c);
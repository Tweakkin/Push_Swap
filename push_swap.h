#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>


typedef struct s_stack
{
	int value;
	struct s_stack	*next;
}t_stack;

typedef struct s_data
{
    t_stack *stack;
}t_data;

int	ft_atoi_safe(const char *str);
void check_for_invalidchar(char *arg);
void exit_error();
t_stack    *ft_lstlast(t_stack *lst);
t_stack *create_newnode(int value);
void print_list(t_stack *head);
int sa(t_data *a_data);
int sb(t_data *b_data);
int ss(t_data *a_data, t_data *b_data);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void    ft_lstadd_back(t_stack **lst, t_stack *new);
void    check_for_duplicates(int num, t_stack *stack);
char	**ft_split(char const *s, char c);
int	ft_strlen(const char *str);
void check_for_emptystring(char *arg);
int pa(t_data *a_data, t_data *b_data);
int pb(t_data *a_data, t_data *b_data);
int ra(t_data *a_data);
int rb(t_data *b_data);
int rr(t_data *a_data, t_data *b_data);
t_stack *ft_secondlast(t_stack *lst);
int rra(t_data *a_data);
int rrb(t_data *b_data);
int rrr(t_data *a_data, t_data *b_data);

#endif
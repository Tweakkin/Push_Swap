#include "push_swap.h"

int	ft_atoi_safe(const char *str, t_data *a, t_data *b, char **argv)
{
	int	i;
	int	sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= 57 && str[i] >= 48)
	{
		res = (res * 10) + (str[i] - 48);
		if (sign == 1 && res > INT_MAX)
			exit_free(a, b, argv);
		if (sign == -1 && -res < INT_MIN)
			exit_free(a, b, argv);
		i++;
	}
	return ((int)res * sign);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
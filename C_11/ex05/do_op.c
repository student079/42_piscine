/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoan <hyeoan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:42:38 by hyeoan            #+#    #+#             */
/*   Updated: 2022/09/14 12:44:19 by hyeoan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_add(int a, int b);
int	ft_sub(int a, int b);
int	ft_mul(int a, int b);
int	ft_div(int a, int b);
int	ft_mod(int a, int b);

int	do_op(int a, int b, char op)
{
	int	(*ft_cal[5])(int, int);
	int	return_value;

	ft_cal[0] = ft_add;
	ft_cal[1] = ft_sub;
	ft_cal[2] = ft_mul;
	ft_cal[3] = ft_div;
	ft_cal[4] = ft_mod;
	if (op == '+')
		return_value = ft_cal[0](a, b);
	if (op == '-')
		return_value = ft_cal[1](a, b);
	if (op == '*')
		return_value = ft_cal[2](a, b);
	if (op == '/')
		return_value = ft_cal[3](a, b);
	if (op == '%')
		return_value = ft_cal[4](a, b);
	return (return_value);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

void	ft_print_nbr(long long value)
{
	char	c;

	if (value < 0)
	{
		write(1, "-", 1);
		ft_print_nbr(value * (-1));
	}
	else
	{
		if (value > 9)
			ft_print_nbr(value / 10);
		c = (value % 10) + '0';
		write(1, &c, 1);
	}
}

int	is_valid(int b, char op)
{
	if (!(op == '+' || op == '-' || op == '*' || op == '/' || op == '%'))
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (op == '/' && b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (op == '%' && b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	op;
	int		a;
	int		b;
	int		ans;
	int		i;

	i = 0;
	if (argc != 4)
		return (0);
	if (argv[2][1])
	{
		write (1, "0\n", 2);
		return (0);
	}
	op = argv[2][0];
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (is_valid(b, op) == 0)
		return (0);
	ans = do_op(a, b, op);
	ft_print_nbr(ans);
	write(1, "\n", 1);
	return (0);
}

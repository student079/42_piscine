/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:29:11 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/01 18:46:06 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_get_hex(unsigned long long nb, int zero)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16 && zero == 1)
		ft_putchar('0', 1);
	if (nb >= 16)
	{
		ft_get_hex(nb / 16, 0);
		ft_get_hex(nb % 16, 0);
	}
	else
	{
		ft_putchar(base[nb], 1);
	}
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int					i;

	tmp = addr;
	i = 1;
	while (i < 16)
	{
		if (tmp < 16)
			ft_putchar('0', 1);
		tmp /= 16;
		i++;
	}
	ft_get_hex(addr, 0);
}

void	ft_print_data(unsigned char *c, int size)
{
	int		i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ', 1);
		if (i < size)
		{
			ft_get_hex((unsigned long long)*(c + i), 1);
		}
		else if (i != 16)
		{
			ft_putchar(' ', 2);
		}
	}
	i = -1;
	while (i++ < size - 1)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putchar('.', 1);
		else
			ft_putchar(*(c + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	temp_size;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			temp_size = 16;
		else
			temp_size = size % 16;
		ft_print_addr((unsigned long long)c + (i * 16));
		ft_putchar(':', 1);
		ft_print_data(c + (i * 16), temp_size);
		ft_putchar('\n', 1);
		i++;
	}
	return (addr);
}
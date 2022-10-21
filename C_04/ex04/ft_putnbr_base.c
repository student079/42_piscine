/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:58:23 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/08 15:14:56 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (j < i)
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (i);
}

void	get_hex(long long nbr, char *base, int len)
{
	long long	length;

	length = len;
	if (nbr >= length)
	{
		get_hex(nbr / length, base, length);
		get_hex(nbr % length, base, length);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long long	big_nbr;

	big_nbr = (long long)nbr;
	len = base_len(base);
	if (len == 0 || len == 1)
		return ;
	if (big_nbr < 0)
	{
		ft_putchar('-');
		big_nbr = big_nbr * -1;
	}
	get_hex(big_nbr, base, len);
}

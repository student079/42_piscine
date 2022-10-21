/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:12:30 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/12 15:04:08 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;
	long long	nbr;

	nbr = nb;
	if (nbr < 1)
		return (0);
	i = 1;
	while (i * i < nbr)
		i++;
	if (i * i == nbr)
		return ((int)i);
	else
		return (((int)i + 1));
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	i = 2;
	sqrt = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

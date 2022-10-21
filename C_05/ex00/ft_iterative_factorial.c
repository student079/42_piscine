/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:55:21 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/03 11:04:24 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	data;

	data = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb != 1)
	{
		data = data * nb;
		nb--;
	}
	return (data);
}

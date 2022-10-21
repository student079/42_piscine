/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:10:24 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/11 18:17:37 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	data;

	data = 1;
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (power > 0)
		{
			data = data * nb;
			power--;
		}
	}
	return (data);
}

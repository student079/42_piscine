/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:17:13 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/03 11:17:15 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power -1));
}

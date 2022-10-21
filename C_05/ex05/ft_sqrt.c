/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:37:36 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/11 18:20:25 by jinsjeon         ###   ########.fr       */
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
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:23:04 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/15 19:39:12 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_up_down(int (*f)(int, int), int *tab, int length)
{
	int			i;
	long long	flag;
	long long	temp;

	i = 0;
	temp = 0;
	flag = 1;
	while (i < length - 1)
	{
		temp = (long long)(*f)(tab[i], tab[i + 1]);
		if (flag * temp != 0)
		{
			if (flag * temp < 0)
				return (-1);
			else
				return (1);
		}
		i++;
	}
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	flag;

	i = -1;
	if (length <= 2)
		return (1);
	flag = is_up_down((*f), tab, length);
	if (flag == 1)
	{
		while (++i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) < 0)
				return (0);
		}
	}
	else
	{
		while (++i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
		}
	}
	return (1);
}	

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:01:03 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/10 19:05:43 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	pass_isspace_fix_sign(char *str, int *sign)
{
	int	idx;

	idx = 0;
	while (str[idx] && (str[idx] == ' ' || (str[idx] >= 9 && str[idx] <= 13)))
		idx++;
	while (str[idx] && (str[idx] == '+' || str[idx] == '-'))
	{
		if (str[idx] == '-')
			*sign = *sign * -1;
		idx++;
	}
	return (idx);
}

int	ft_atoi(char *str)
{
	int	idx;
	int	sign;
	int	data;

	data = 0;
	idx = 0;
	sign = 1;
	idx = pass_isspace_fix_sign(str, &sign);
	if (!(str[idx] >= '0' && str[idx] <= '9'))
		return (0);
	while (str[idx] && (str[idx] >= '0' && str[idx] <= '9'))
	{
		data = data * 10 + (str[idx] - '0');
		idx++;
	}
	return (data * sign);
}

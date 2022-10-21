/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:03:25 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/10 19:13:36 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

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

int	len_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		if (base[i] == '+' || base[i] == '-' || (base[i] >= 9 && base[i] <= 13))
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

int	ft_atoi_base(char *str, char *base)
{
	int	idx;
	int	sign;
	int	data;
	int	base_len;
	int	i;

	data = 0;
	idx = 0;
	sign = 1;
	base_len = len_base(base);
	if (base_len == 0 || base_len == 1)
		return (0);
	idx = pass_isspace_fix_sign(str, &sign);
	while (str[idx] && is_base(base, str[idx]))
	{
		i = 0;
		while (base[i])
		{
			if (base[i++] == str[idx])
				break ;
		}
		data = data * base_len + (i - 1);
		idx++;
	}
	return (data * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:13:25 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/14 20:58:26 by jinsjeon         ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-' || (base[i] >= 9 && base[i] <= 13)
			|| base[i] == ' ')
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
	int	sign;
	int	data;
	int	i;

	data = 0;
	sign = 1;
	str += pass_isspace_fix_sign(str, &sign);
	while (*str && (!(is_base(base, *str))))
		str++;
	while (*str && is_base(base, *str))
	{
		i = 0;
		while (base[i++] != *str)
		{				
		}
		data = data * len_base(base) + (i - 1);
		str++;
	}
	return (data * sign);
}

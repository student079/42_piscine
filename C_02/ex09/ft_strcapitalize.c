/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:51:31 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/08/30 13:31:23 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
			str[idx] += 32;
		idx++;
	}
	return (str);
}

void	flag_num_or_al(char c, int *flag)
{
	if (!(c >= '0' && c <= '9'))
	{
		if (!(c >= 'a' && c <= 'z'))
			*flag = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	idx;
	int	flag;

	idx = 0;
	flag = 1;
	ft_strlowcase(str);
	while (str[idx])
	{
		if (flag == 0)
		{
			flag_num_or_al(str[idx], &flag);
		}
		if (flag == 1)
		{
			if (str[idx] >= 'a' && str[idx] <= 'z')
			{
				str[idx] -= 32;
				flag = 0;
			}
			else if (str[idx] >= '0' && str[idx] <= '9')
				flag = 0;
		}
	idx++;
	}
	return (str);
}

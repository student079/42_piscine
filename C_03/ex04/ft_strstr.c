/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:13:06 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/07 20:33:31 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find(char *str, char *to_find, int i)
{
	int	idx;

	idx = 0;
	while (str[i] && to_find[idx])
	{
		if (str[i] != to_find[idx])
			return (0);
		i++;
		idx++;
	}
	if (to_find[idx])
		return (0);
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*(to_find) == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (find(str, to_find, i))
				return (str + i);
		}
	i++;
	}
	return (0);
}

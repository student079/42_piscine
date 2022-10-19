/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:30:51 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/05 22:37:33 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	len;

	len = 0;
	idx = 0;
	if (!dest || !src)
		return (0);
	while (src[len])
		len++;
	while (src[idx] != '\0' && idx +1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < size)
		dest[idx++] = '\0';
	return (len);
}

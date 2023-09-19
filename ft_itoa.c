/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:06:18 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/18 18:08:03 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	length(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	sign;
	char	*str;

	len = length(n);
	if (!(str = (char *)malloc(len + 1)))
			return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		sign = 1;
	}
	else
		sign = 0;
	while (len-- > sign)
	{
		str[len] = '0' + n % 10 * (n < 0 ? -1 : 1);
		n /= 10;
	}
	return (str);
}

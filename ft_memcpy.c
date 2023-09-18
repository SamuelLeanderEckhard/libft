/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:03:32 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/18 19:06:50 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	char		*dest;
	char		*src;
	size_t		i;

	dest = (char *)to;
	src = (char *)from;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (to);
}

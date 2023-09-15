/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:46:21 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/15 17:25:43 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int x, size_t n)
{
	const unsigned char *q = s;
	unsigned char ch = (unsigned char)x; //x is changed from int to unsigned char
	
	size_t i = 0;
	while (i < n)
	{
		if (q[i] == ch)
			return (void *)(q + i);
		i++;
	}

	return(0);
}

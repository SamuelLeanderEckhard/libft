/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:27:26 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/14 18:06:12 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = dest;
	const unsigned char *s = src;
	
	if (s < d)
	{
		d += n;
		s += n;
		while (n--) *--d = *--s;
	}
	else
	{
		while (n--) *d++ = *s++;
	}
	return dest;
}

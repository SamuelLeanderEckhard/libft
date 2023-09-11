/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:05:03 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/11 16:23:54 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *buf, int val, size_t count)
{
	char *p = buf;
	char v = val;
	size_t i = 0;
	
	while (i < count)
	{
		p[i] = v;
		i++;
	}

	return buf;
}

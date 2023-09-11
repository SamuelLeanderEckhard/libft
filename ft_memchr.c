/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:46:21 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/11 15:10:17 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

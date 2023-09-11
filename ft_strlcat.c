/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:27:15 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/11 15:10:27 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, int size)
{
	size_t dest_len = 0;
	size_t src_len = 0;
	
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	if (dest_len >= size)
		return (dest_len + src_len)

	size_t space = size - dest_len - 1;

	size_t i = 0;
	while (src[i] != '\0' && i < space)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return(dest_len + src_len);
}
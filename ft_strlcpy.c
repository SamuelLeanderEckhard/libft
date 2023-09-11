/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:44:27 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/11 15:08:05 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i = 0;
	
	if (size <= 0)
		return (0);

	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	size_t src_len = 0;
	while (src[src_len] != '\0')
		src_len++;

	return(src_len);
}
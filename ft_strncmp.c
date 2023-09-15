/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:07:49 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/15 17:25:07 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i = 0;
	
	while (i < n)
	{
		if (str1[i] != str2[i])
			return(str1[i] - str2[i]);

		if (str1[i] == '\0' || str2[i] == '\0')
			break;

		i++;
	}
	return(0);
}

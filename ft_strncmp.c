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
	size_t			i;
	unsigned char	uc1;
	unsigned char	uc2;

	uc1 = (unsigned char)str1[i];
	uc2 = (unsigned char)str2[i];
	i = 0;
	while (i < n)
	{
		if (uc1 != uc2)
			return (uc1 - uc2);
		if (uc1 == '\0' || uc2 == '\0')
			break ;
		i++;
	}
	return (0);
}

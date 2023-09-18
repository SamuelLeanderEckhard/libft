/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:59:51 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/18 18:43:33 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(char x)
{
	if (x >= 'A' && x <= 'Z')
		return (x + 32);
	else
		return (x);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:32:07 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/15 16:06:49 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// writes a character to a specified file descriptor
void    ft_putchar_fd(char c, int fd) // fd = file descriptor
{
    write(fd, &c, 1);
}
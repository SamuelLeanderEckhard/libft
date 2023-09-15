/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:12:55 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/15 14:40:34 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// goes through a string and applies a given function to each character in the string, along with its index.
void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t i;

    if (s && f) // checks if string 's' and the function pointer 'f' are not NULL
    {
        i = 0;
        while (*s) // goes through teh string until the null terminator '\0' is reached
            f(i++, s++);
    }
}
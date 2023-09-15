/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:47:59 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/14 18:06:35 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char  *str_malloc(size_t c) // creates memory space of the size of original string
{
    char    *str;

    str = (char *)malloc(sizeof(char) * (c + 1));
    if (!str)
        return (NULL);
    return (str);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    char    *str_ptr;

    if (!s1 || !s2)
            return (NULL);
    str = str_malloc(ft_strlen(s1) + ft_strlen(s2));
    if (!str)
            return (NULL);
    str_ptr = str;
    while (*s1)
            *str** = *s1++;
    while (*s2)
            *str++ = *s2++;
    *str = '\0';
    return (str_ptr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:58:30 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/15 14:12:17 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_mal(size_t n)
{
    char    *str;

    str = (char *)malloc(sizeof(char) * (n + 1)); // memory allocation 1 x (string n + '\0')
    if (!str) // if the memory allocation failed, return NULL
        return (NULL);
    return (str);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char)) // applies a function to each character of  astring, rcreating a new string with the results
{
    char *str;
    char *result;
    size_t i;

    if (!s)
        return (NULL); // checks if input string 's' is NULL

    size_t n = ft_strlen(s); // length of 's'

    str = ft_mal(n); // allocate memory for the new string

    if (!str)
        return (NULL);

    i = 0;
    result = str;

    while (*s)
        *str++ = f(i++, *s++); // apply the function 'f' and store the result in the new string
    *str = '\0';
    return (result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:22:30 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/14 18:07:09 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;

    if (!s || start >= ft_strlen(s))
    {
        str = (char *)malloc(1); //allocate memory of an empty string
        if (!str)
            return (NULL);
        *str = '\0'; //make sure the string is properly terminated
        return (str);
    }

    if (ft_strlen(s + start) < len)
        len = ft_strlen(s + start);

    str = (char *)malloc(sizeof(char) * (len + 1));

    if (!str)
        return (0);
    
    ft_strlcpy(str, s + start, len + 1);
    return (str);
}
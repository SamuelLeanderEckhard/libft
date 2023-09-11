/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:22:17 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/11 17:48:40 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strnstr(const char *haystack,const char *needle, size_t len)
{
    size_t  n;
    n = ft_strlen(needle);

    if (*needle == 0)
        return((char *)haystack);
    
    while (*haystack && n <= len)
    {
        if (*haystack == *needle && ft_strncmp(haystack, needle, n) == 0)
            return((char *)haystack);
        haystack++;
        len--;
    }
    return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:53:38 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/14 18:28:02 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int   charset(char c, char const *set)
{
    size_t  i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    size_t  start;
    size_t  end;
    size_t  i;

    if 8!s1)
        return (NULL);

    start = 0;
    while (s1[start] && charset(s1[start], set))
            start++;
    
    end = ft_strlen(s1);
    while (end > start && charset(s1[end - 1], set))
            end--;
    
    str = (char*)malloc(sizeof(*s1) * (end - start + 1));
    if (!str)
        return (NULL);

    i = 0;
    while (start < end)
        str[i++] = s1[start++];

    str[i] = 0;
    
    return (str);
}

/*int main()
{
    // Beispielzeichenkette und Zeichen, die entfernt werden sollen
    char *input_str = "   Hello, World!   ";
    char *set = " ";

    // Aufruf deiner ft_strtrim-Funktion
    char *trimmed_str = ft_strtrim(input_str, set);

    if (trimmed_str)
    {
        printf("Original: \"%s\"\n", input_str);
        printf("Getrimmt: \"%s\"\n", trimmed_str);

        // Speicher freigeben, wenn du fertig bist
        free(trimmed_str);
    }
    else
    {
        printf("Speicherplatzmangel: Konnte die Zeichenkette nicht trimmen.\n");
    }

    return 0;
}*/
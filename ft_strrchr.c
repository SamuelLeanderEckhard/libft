/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:30:21 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/11 17:51:59 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int character)
{
	char *last = 0;
	
	while (*str != '\0')
	{
		if (*str == character)
			last = (char *)str;
		str++;
	}
	return(last);
}

/*#include <stdio.h>

// Declaration of the custom ft_strrchr function
char *ft_strrchr(const char *str, int character);

int main() {
    const char *str = "Hello, World!";
    char searchChar = 'o';

    // Call the custom ft_strrchr function to find the last 'o' in the string
    char *result = ft_strrchr(str, searchChar);

    if (result != 0) {
        printf("Found last '%c' at position %ld\n", searchChar, result - str);
    } else {
        printf("'%c' not found in the string.\n", searchChar);
    }

    return 0;
}*/

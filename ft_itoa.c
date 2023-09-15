/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:06:18 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/14 20:57:27 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    calculateLenghtAndWeight(int n, size_t *len, int *weight)
{
    *len = 0;
    *weight = 1;

    if (n == 0)
    {
        *len = 1;
        return;
    }

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        n /= 10;
        (*len)++;
        if (n > 0)
            *weight *= 10;
    }
}

char    *ft_itoa(int n)
{
    size_t  len;
    int weight;
    size_t  test;
    char    *str;

    calculateLenghtAndWeight(n, &len, &weight);
    str = (char *)malloc(sizeof(*str) * (len + 1));
    if (str == NULL)
        return (NULL);
    test = 0;
    if (n < 0)
    {
        str[test] = '-';
        test++;
    }
    if (n > 0)
        n = -n;
    while (weight >= 1)
    {
        str[test++] = -(n / weight % 10) + 48;
        weight /= 10;
    }
    str[test] = '\0';
    return (str);
}
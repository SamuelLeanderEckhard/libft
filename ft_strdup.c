/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:49:04 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/15 14:07:34 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *s)
{
    size_t len = ft_strlen(s); //length of s
    char *dup = (char*)malloc(len + 1); //allocats memory of dupstring

    if (dup == NULL)
    return(NULL); //if memory allocation fails return NULL

    ft_strcpy(dup, s); //copies s string to dup
    return(dup); //return pointer to dupstring
}
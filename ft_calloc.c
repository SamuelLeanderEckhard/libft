/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:47:42 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/14 18:05:10 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t numb, size_t size)
{
    void *ptr;

    ptr = (void *)malloc(numb * size); //allocates memory using malloc
    if (!ptr)
        return (NULL); //if memory allocation wasn't sucessful
    ft_bzero(ptr, numb); //set the allocated memory to zero
    return (ptr);
}
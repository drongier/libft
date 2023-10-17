/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:34:32 by drongier          #+#    #+#             */
/*   Updated: 2023/06/17 16:48:51 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;

	len_dst = (ft_strlen(dst));
	if (size <= len_dst)
		return (ft_strlen(src) + size);
	i = 0;
	while (src[i] && (len_dst + i) < (size - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = 0;
	return (ft_strlen(src) + len_dst);
}
/*
#include <stdio.h>

int main(void) 
{
    char dst[28] = "Hello";
    const char *src = " World!";
    size_t dstsize = sizeof(dst);

    size_t result = ft_strlcat(dst, src, dstsize);

    printf("Concatenated string: %s\n", dst);
    printf("Length of the resulting string: %zu\n", result);

    return 0;
}
*/

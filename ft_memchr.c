/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:16:23 by drongier          #+#    #+#             */
/*   Updated: 2023/06/14 12:37:35 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*str;
	unsigned int		to_find;

	i = 0;
	str = (unsigned char const *)s;
	to_find = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == to_find)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	char str_real5[50];
	strcpy(str_real5, "Hello 42 !");
	char *pos_real3 = memchr(str_real5, 'o', 5);
	char *pos_test3 = ft_memchr(str_real5, 'o', 5);
	printf("str : %s : memchr : %s, real : %s\n", str_real5, pos_test3, pos_real3);
}
*/
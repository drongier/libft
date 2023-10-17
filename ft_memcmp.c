/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:01:41 by drongier          #+#    #+#             */
/*   Updated: 2023/06/16 14:25:17 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*d1;
	char	*d2;

	if (n == 0)
		return (0);
	i = 0;
	d1 = (char *)s1;
	d2 = (char *)s2;
	while (n--)
	{
		if (d1[i] != d2[i])
			return ((unsigned char)d1[i] - (unsigned char)d2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    printf("ft_memcmp : %d\n", ft_memcmp("teste", "test", 2));
    printf("memcmp : %d\n", memcmp("teste", "test", 2));
}
*/

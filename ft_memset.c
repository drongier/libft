/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:25:01 by drongier          #+#    #+#             */
/*   Updated: 2023/05/09 15:08:03 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*src;

	i = 0;
	src = (char *)s;
	while (i < n)
	{
		src[i] = c;
		i++;
	}
	return (s);
}
/*
int main (void)
{
	char str[] = "lets try memset!";
	ft_memset(str,'-',6);
	puts(str);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:30:24 by drongier          #+#    #+#             */
/*   Updated: 2023/07/05 11:40:00 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*sourc;
	char	*desti;

	i = 0;
	sourc = (char *)src;
	desti = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		desti[i] = sourc[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "";
	char	str2[] = "";

	ft_memcpy(str1, str2, 5);
	
	puts(str1);
}
*/

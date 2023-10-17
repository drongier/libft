/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:29:49 by drongier          #+#    #+#             */
/*   Updated: 2023/05/09 15:28:29 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*src;

	i = 0;
	src = (char *)s;
	while (i < n)
	{
		src[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	str[]= "Lqlqlqlqlqql";

	ft_bzero(str, 1);
 	puts(str);
}
*/

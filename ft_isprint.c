/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:09:40 by drongier          #+#    #+#             */
/*   Updated: 2023/06/14 12:01:57 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <ctype.h>

int	main(void)
{
		printf("\n---- isprint ----\n");
	printf("5 isprint : %d, real : %d\n", ft_isprint('5'), isprint('5'));
	printf("¡ isprint : %d, real : %d\n", ft_isprint(0xA1), isprint(0xA1));
}
*/
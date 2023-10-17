/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:01:22 by drongier          #+#    #+#             */
/*   Updated: 2023/05/03 15:07:10 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <ctype.h>

int	main(void)
{
	printf("\n---- isascii ----\n");
	printf("5 isascii : %d, real : %d\n", ft_isascii('5'), isascii('5'));
	printf("¡ isascii : %d, real : %d\n", ft_isascii(0xA1), isascii(0xA1));
}
*/
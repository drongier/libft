/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:06:47 by drongier          #+#    #+#             */
/*   Updated: 2023/06/24 13:18:54 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int main(void)
{
    char ch;
 
    ch = 'g';
    printf("%c in uppercase is represented as  %c\n", ch, toupper(ch));
	printf("%c in uppercase is represented as  %c", ch, ft_toupper(ch));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:48:37 by drongier          #+#    #+#             */
/*   Updated: 2023/07/07 11:09:40 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*desti;
	char	*sourc;

	i = 0;
	desti = (char *)dest;
	sourc = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (src > dest)
	{
		while (i < n)
		{
			desti[i] = sourc[i];
			i++;
		}
	}
	else
	{
		while (n--)
			desti[n] = sourc[n];
	}
	return (dest);
}
/*
int main()
{
    char src[] = "Hello, world!";
    char dest[] = "fwfwfwhhhhhhhhhw";

    printf("Avant la copie : dest = %s\n", dest);
    ft_memmove(dest, src, strlen(src) + 1);
    printf("Après la copie : dest = %s\n", dest);

    return 0;
}
*/

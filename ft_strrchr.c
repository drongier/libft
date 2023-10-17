/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:06:42 by drongier          #+#    #+#             */
/*   Updated: 2023/06/24 13:21:05 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)(str + i));
		i--;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)(str + i));
	return (NULL);
}
/*
int main(void)
{
    char str[] = "jiosji";
    char *result = ft_strrchr(str, 's');

    if (result != NULL)
        printf("found at %s\n", result);
    else
        printf("Not found\n");

    return 0;
}
*/

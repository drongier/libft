/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:45:38 by drongier          #+#    #+#             */
/*   Updated: 2023/06/22 17:17:46 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	new;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		sub = ft_calloc(1, sizeof(char));
		if (!sub)
			return (NULL);
	}
	else
	{
		new = ft_strlen(s + start);
		if (!(new < len))
			new = len;
		sub = (char *)malloc((new + 1) * sizeof(char));
		if (!sub)
			return (NULL);
		sub[new] = 0;
		while (new-- > 0)
			sub[new] = s[start + new];
	}
	return (sub);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    const char *original = "Hello, world!";
    unsigned int start = 2;
    size_t length = 5;

    char *substring = ft_substr(original, start, length);
    if (substring != NULL) {
        printf("Sous-chaîne : %s\n", substring);
        free(substring);
    }

    return (0);
}
*/

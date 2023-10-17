/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:09:35 by drongier          #+#    #+#             */
/*   Updated: 2023/06/22 16:50:39 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	little_len;
	size_t	i;

	i = 0;
	little_len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && len >= little_len)
	{
		if (ft_strncmp(&haystack[i], needle, little_len) == 0)
			return ((char *)&haystack[i]);
		i++;
		len--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "world";
    size_t len = strlen(haystack);

    char *result = ft_strnstr(haystack, needle, len);
    if (result != NULL) {
        printf("Sous-chaîne trouvée : %s\n", result);
    } else {
        printf("Sous-chaîne non trouvée.\n");
    }

    return 0;
}
*/

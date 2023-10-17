/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:27:55 by drongier          #+#    #+#             */
/*   Updated: 2023/06/22 18:37:39 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char ft_modify_char(unsigned int index, char c)
{
    // Exemple simple : ajouter 1 à la valeur ASCII de chaque caractère
    return c + 1;
}

int main()
{
    const char *str = "Hello, World!";
    char *modified_str = ft_strmapi(str, ft_modify_char);

    printf("Original string: %s\n", str);
    printf("Modified string: %s\n", modified_str);
    free(modified_str);
    return (0);
}
*/

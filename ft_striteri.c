/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:55:02 by drongier          #+#    #+#             */
/*   Updated: 2023/06/22 18:26:41 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void ft_modify_char(unsigned int index, char *c)
{
    // Exemple simple : convertir chaque caractère en majuscule
    if (*c >= 'a' && *c <= 'z')
        *c = *c - ('a' - 'A');
}

int main()
{
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    
    ft_striteri(str, ft_modify_char);
    
    printf("Modified string: %s\n", str);
    
    return 0;
}
*/

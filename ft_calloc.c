/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:57:36 by drongier          #+#    #+#             */
/*   Updated: 2023/06/14 14:57:44 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (0);
	while (i < nmemb * size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}

/*
int main(void)
{
    // Exemple 1 : Allouer et initialiser un tableau d'entiers
    int *arr1 = (int *)ft_calloc(5, sizeof(int));
    if (arr1 != NULL)
    {
        printf("Tableau 1 :\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr1[i]);
        }
        printf("\n");
        free(arr1); // Libérer la mémoire allouée
    }
}
*/

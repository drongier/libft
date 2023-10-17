/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:04:51 by drongier          #+#    #+#             */
/*   Updated: 2023/06/15 16:22:48 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
/*
#include <stdio.h>

int main(void) 
{
    int value = 42;

    t_list *list = ft_lstnew(&value);
    printf("Contenu de l'élément de liste : %d\n", *(int*)(list->content));
    free(list);

    return (0);
}
*/

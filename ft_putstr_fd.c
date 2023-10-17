/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:30:35 by drongier          #+#    #+#             */
/*   Updated: 2023/06/22 19:05:34 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
/*
int main()
{
    char *str = "Hello, World!";
    int fd = STDOUT_FILENO;  // Utilisation de la sortie standard pour l'exemple
    
    ft_putstr_fd(str, fd);
    
    return 0;
}
*/

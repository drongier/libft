/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drongier <drongier@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:14:23 by drongier          #+#    #+#             */
/*   Updated: 2023/07/05 12:28:32 by drongier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
    char c = 'c';
    int fd = STDOUT_FILENO;  // Utilisation de la sortie standard pour l'exemple
    
    ft_putchar_fd(c, fd);
    
    return (0);
}
*/

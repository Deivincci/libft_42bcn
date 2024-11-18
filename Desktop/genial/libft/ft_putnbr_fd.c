/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:23:06 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/02/07 12:09:46 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*used to print an integer "n" to the specified file descriptor "fd"*/
static void	ft_putnbr_aux(unsigned int n, int fd)
{
	if (n < 10)
		ft_putchar_fd(n +48, fd);
	else
	{
		ft_putnbr_aux(n / 10, fd);
		ft_putnbr_aux(n % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n < 0)
	{
		write (fd, "-", 1);
		ft_putnbr_aux(-n, fd);
	}
	else
		ft_putnbr_aux(n, fd);
}

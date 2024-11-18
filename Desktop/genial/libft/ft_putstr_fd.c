/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:04:43 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/01/28 13:16:12 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*prints a string of characters to standard output (STDOUT) without adding
 a line break at the end. The function iterates over the string until it finds
 the terminating null character '\0' and uses the write function to write each
 character to standard output.*/
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}

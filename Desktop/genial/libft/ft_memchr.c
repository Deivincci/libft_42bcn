/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:19:59 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/02/07 09:33:01 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*will examine the first "n" bytes of memory block "s" for the first
 occurrence of the specific byte "c"*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	ptr_c;
	size_t			x;

	ptr_s = (unsigned char *)s;
	ptr_c = (unsigned char)c;
	x = 0;
	while (x < n)
	{
		if (ptr_s[x] == ptr_c)
			return ((void *)(s + x));
		x++;
	}
	return (NULL);
}

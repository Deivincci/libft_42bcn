/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:30:00 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/02/07 09:23:46 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*copies in a non-destructive way, similar to memcpy, but allows overlap
 taking advantage of memory position, len is the number of bytes to copy*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	x;

	x = 0;
	if (src == 0 && dst == 0)
		return (NULL);
	if (len == 0)
		return (dst);
	if (src < dst && dst < src + len)
	{
		while (len-- > 0)
		{
			*((unsigned char *)dst + len) = *((const unsigned char *)src + len);
		}
	}
	else
	{
		while (x < len)
		{
			((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
			x++;
		}
	}
	return (dst);
}

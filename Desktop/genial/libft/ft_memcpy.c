/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:30:28 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/01/28 10:08:05 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*It is used to copy a block of memory from a source memory location to a
 destination memory location, n is the number of bytes it will copy*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t			i;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}

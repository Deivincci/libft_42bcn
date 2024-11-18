/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:08:14 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/02/17 10:47:26 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*is used to safely concatenate two character strings into a destination
 buffer, preventing buffer overflows and ensuring that the resulting string
 is properly terminated with the null character, size is the destination size*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t			dst_len;
	size_t			src_len;
	size_t			i;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (size <= dst_len)
		return (size + src_len);
	while (i < size - dst_len - 1 && psrc[i] != '\0')
	{
		pdst[dst_len + i] = psrc[i];
		i++;
	}
	pdst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

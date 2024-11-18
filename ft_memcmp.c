/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:01:42 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/01/28 10:46:05 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*compares two blocks of memory (s1 and s2) byte by byte up to a maximum of
 n bytes.If a difference is found between the compared bytes at x positions,
 the function returns the difference between those bytes*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				x;

	ptr_s1 = (const unsigned char *)s1;
	ptr_s2 = (const unsigned char *)s2;
	x = 0;
	while (x < n)
	{
		if (ptr_s1[x] != ptr_s2[x])
			return (ptr_s1[x] - ptr_s2[x]);
		x++;
	}
	return (0);
}

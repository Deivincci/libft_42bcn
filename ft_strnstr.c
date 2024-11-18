/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcel>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:58:01 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/01/28 10:48:16 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*is used to search for the first occurrence of a "needle" substring within
 another "haystack" string, but with the option to specify a "len" limit on
 the number of characters to search.*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[x] && x < len)
	{
		y = 0;
		while (haystack[x + y] == needle[y] && (x + y) < len && needle[y])
		{
			y++;
		}
		if (needle[y] == '\0')
			return ((char *)&haystack[x]);
		x++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:01:16 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/02/07 13:04:03 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*strrchr is used to search int c in string s, from end to beginning*/
char	*ft_strrchr(const char *s, int c)
{
	char	ptr_c;
	char	*ptr_s;
	size_t	x;
	size_t	len;

	ptr_c = (char)c;
	ptr_s = (char *)s;
	x = 0;
	len = ft_strlen(s);
	while (x <= len)
	{
		if (s[len - x] == ptr_c)
			return (&ptr_s[len - x]);
		x++;
	}
	return (NULL);
}

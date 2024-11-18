/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:10:26 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/02/07 13:02:47 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*strchr is used to search int c in string s, from beginning to end*/
char	*ft_strchr(const char *s, int c)
{
	size_t	x;
	char	*ptr_s;
	char	ptr_c;

	x = 0;
	ptr_s = (char *)s;
	ptr_c = (char)c;
	while (s[x] != '\0' && s[x] != ptr_c)
		x++;
	if (s[x] == ptr_c)
		return (&ptr_s[x]);
	return (NULL);
}

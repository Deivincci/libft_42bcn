/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:35:15 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/01/28 10:58:19 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*is used to duplicate an existing character string "s1" in memory that we
 specify as pointer "s2"*/
char	*ft_strdup(const char *s1)
{
	size_t		len;
	size_t		i;
	char		*s2;

	len = ft_strlen(s1);
	i = 0;
	s2 = (char *)malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[len] = '\0';
	return (s2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:22:23 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/02/02 15:31:58 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*is used to allocate and clear memory for a set of contiguous "count"
 elements with a size "size" of each element, like a dynamic array*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr_count;

	ptr_count = malloc(count * size);
	if (ptr_count != NULL)
		ft_memset(ptr_count, 0, count * size);
	return (ptr_count);
}

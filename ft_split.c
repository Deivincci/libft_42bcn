/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoral-p <dmoral-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:06:30 by dmoral-p          #+#    #+#             */
/*   Updated: 2024/02/07 14:44:11 by dmoral-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/* ft_countword:Count the number of words in the string.s: The string
from which to count the words. c: The delimiting character.
 ft_free: Frees dynamically allocated memory for an array of strings.
str: The array of strings to be freed.Return: NULL (to facilitate memory
management).
ft_word_length: Calculates the length of a word in the string up to the next
delimiter.s: The string where to search for the word.c: The delimiting character.
 ft_split: Splits a string into substrings using a delimiter and returns an
 array of pointers to the substrings.s: The string to be split.c: The delimiting
 character.*/
static size_t	ft_countword(char const *s, char c)
{
	size_t	count;
	int		word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!word)
			{
				count++;
				word = 1;
			}
		}
		else
		{
			word = 0;
		}
		s++;
	}
	return (count);
}

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static int	ft_word_length(char const *s, char c)
{
	size_t	word_len;

	if (!ft_strchr(s, c))
		word_len = ft_strlen(s);
	else
		word_len = ft_strchr(s, c) - s;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**pt_char;
	size_t	word_len;
	int		i;

	if (!s)
		return (0);
	pt_char = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (s == 0 || pt_char == 0)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = ft_word_length(s, c);
			pt_char[i++] = ft_substr(s, 0, word_len);
			if (pt_char[i - 1] == NULL)
				return (ft_free(pt_char));
			s += word_len;
		}
	}
	pt_char[i] = NULL;
	return (pt_char);
}

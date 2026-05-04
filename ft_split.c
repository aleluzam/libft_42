/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluzardo <aluzardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 11:47:44 by aluzardo          #+#    #+#             */
/*   Updated: 2026/05/03 11:57:43 by aluzardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char *s, char c)
{
	size_t	i;
	size_t	counter;
	int		in_word;

	i = 0;
	counter = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			counter++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (counter);
}

static void	*ft_free_all(char **ptr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static char	*ft_fill(char *str, size_t	start, size_t end)
{
	char	*new;
	size_t	i;

	i = 0;
	new = ft_calloc(end - start + 1, sizeof(char));
	if (!new)
		return (NULL);
	while (start < end)
	{
		new[i] = str[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}

static void	ft_start_variables(size_t *i, size_t *j, int *in_word)
{
	*i = 0;
	*j = 0;
	*in_word = -1;
}

char	**ft_split(char const *s, char c)
{
	char	**new_big;
	size_t	i;
	size_t	j;
	int		in_word;

	ft_start_variables(&i, &j, &in_word);
	new_big = ft_calloc(ft_count_words((char *)s, c) + 1, sizeof(char *));
	if (!new_big)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && in_word < 0)
			in_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && in_word >= 0)
		{
			new_big[j] = ft_fill((char *)s, in_word, i);
			if (!new_big[j])
				return (ft_free_all(new_big, j));
			in_word = -1;
			j++;
		}
		i++;
	}
	return (new_big);
}

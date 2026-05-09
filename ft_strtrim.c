/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzardo <luzardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:53:43 by aluzardo          #+#    #+#             */
/*   Updated: 2026/05/08 14:44:08 by luzardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strchar(const char c, const char *set)
{
	const char	*ptr;

	ptr = set;
	if (!c)
		return (0);
	while (*ptr)
	{
		if (*ptr++ == c)
			return (1);
	}
	return (0);
}

static char	*ft_iterator(char const *string, char const *set, int s)
{
	char const	*ptr;

	ptr = string;
	while (*ptr)
	{
		if (ft_strchar(*ptr, set) == 0)
			return ((char *)ptr);
		if (s > 0)
			ptr++;
		else
			ptr--;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	void	*start;
	void	*end;
	char	*new;

	if (!set || !s1)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_calloc(1, sizeof(char)));
	start = ft_iterator(s1, set, 1);
	if (!start)
		return (ft_calloc(1, sizeof(char)));
	end = ft_iterator(s1 + ft_strlen(s1) - 1, set, -1);
	if (!end || start > end)
		return (ft_calloc(1, sizeof(char)));
	new = ft_calloc(((char *)end - (char *)start) + 2, sizeof(char));
	if (!new)
		return (NULL);
	new = ft_memcpy(new, start, end - start + 1);
	return (new);
}

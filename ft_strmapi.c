/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluzardo <aluzardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:29:14 by luzardo           #+#    #+#             */
/*   Updated: 2026/05/13 11:15:51 by aluzardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;
	size_t	l;

	if (!s || !f)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	new = ft_calloc(l + 1, sizeof(char));
	if (!new)
		return (NULL);
	while (i < l)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
/*
static char	ft_change_case(unsigned int i, char c)
{
	(void)i;

	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return ('-');
}
*/

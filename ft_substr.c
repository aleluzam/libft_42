/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluzardo <aluzardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:56:11 by aluzardo          #+#    #+#             */
/*   Updated: 2026/05/03 11:59:44 by aluzardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
REVISARRRRRRRRR
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);

	new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	new = ft_memcpy(new, (char *)(s + start), len);
	return (new);
}

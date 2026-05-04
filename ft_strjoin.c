/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluzardo <aluzardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:20:57 by aluzardo          #+#    #+#             */
/*   Updated: 2026/04/25 15:52:28 by aluzardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*ptr;

	new = ft_calloc(ft_strlen(s1) + ft_strlen(s2), sizeof(char));
	if (!new)
		return (NULL);
	ptr = ft_memcpy(new, s1, ft_strlen(s1));
	ptr = ptr + ft_strlen(s1);
	ptr = ft_memcpy(ptr, s2, ft_strlen(s2));
	return (new);
}
/*
int	main(void)
{
	char	*new;

	new = ft_strjoin("a", "aa");
	printf("%s", new);
	free(new);
	return (0);
}
*/

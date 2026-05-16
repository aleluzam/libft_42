/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluzardo <aluzardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:55:13 by aluzardo          #+#    #+#             */
/*   Updated: 2026/05/13 11:15:55 by aluzardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*res;
	const char	*ptr;

	ptr = s;
	res = NULL;
	while (*ptr)
	{
		if (*ptr == (char)c)
			res = (char *)ptr;
		ptr++;
	}
	if ((char)c == '\0')
		res = (char *)ptr;
	return (res);
}

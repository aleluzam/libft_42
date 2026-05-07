/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzardo <luzardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 22:14:12 by luzardo           #+#    #+#             */
/*   Updated: 2026/05/06 14:05:38 by luzardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_strlcpy() copia strings desde src hasta dest
	size refleja el tamanyo total de src, incluyendo el caracter '\0'
	src tiene que terminar con '\0'
	La funcion garantiza terminar dest con '\0'
	Retorna el largo (len) del tring que esta intentando crear (len de src)
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (size >= src_len + 1)
		ft_memcpy(dst, src, src_len + 1);
	else
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (src_len);
}

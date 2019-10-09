/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:56:23 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/09 15:15:40 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		src_len;

	src_len = ft_strlen((char*)src);
	if (dstsize > 0)
	{
		i = 0;
		if (dstsize > src_len)
		{
			while (src[i++])
				dst[i] = src[i];
		}
		if (dstsize < src_len)
			while (i < dstsize - 1)
			{
				dst[i] = src[i];
				i++;
			}
		dst[i] = '\0';
	}
	return (0);
}

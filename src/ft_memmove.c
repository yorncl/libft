/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:06:27 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/08 16:52:22 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;

	dest = dst;
	source = (char*)src;
	if (dst < src)
		while (len-- > 0)
			*dest++ = *source++;
	else
		while (len-- > 0)
			dest[len - 1] = source[len - 1];
	return (dst);
}

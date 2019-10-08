/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:12:05 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/08 14:32:30 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	char *dest;
	char *source;

	dest = dst;
	source = (char *)src;
	while (n-- > 0)
	{
		*dest = *source;
		if (*source == c)
			return (dest + 1);
		dest++;
		source++;
	}
	return (0);
}

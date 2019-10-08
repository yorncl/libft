/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:51:25 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/08 14:09:03 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	char *dest;
	char *source;

	dest = dst;
	source = (char *)src;
	while (n-- > 0)
		*dest++ = *source++;
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:28:10 by mclaudel          #+#    #+#             */
/*   Updated: 2020/06/03 15:20:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_memcpy_bis(void *dst, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (n == 0 || dst == src)
		return (dst);
	while (n--)
		*destination++ = *source++;
	*destination = '\0';
	return (dst);
}

char			*ft_strdup(const char *s1)
{
	char	*cpy;

	if (!(cpy = ft_calloc(1, sizeof(char) * (ft_strlen(s1) + 1))))
		return (0);
	return (ft_memcpy_bis(cpy, s1, ft_strlen(s1)));
}

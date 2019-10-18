/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:37:12 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/18 17:10:11 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			destlen;
	unsigned int	i;
	char			*scursor;
	char			*dcursor;

	scursor = (char *)src;
	dcursor = dst;
	i = 0;
	while (i++ < dstsize && *dcursor != '\0')
		dcursor++;
	destlen = dcursor - dst;
	if (dstsize - destlen == 0)
		return (destlen + ft_strlen((char *)src));
	i = destlen;
	while (*scursor != '\0')
	{
		if (i++ < dstsize - 1)
		{
			*dcursor = *scursor;
			dcursor++;
		}
		scursor++;
	}
	*dcursor = '\0';
	return (destlen + scursor - src);
}

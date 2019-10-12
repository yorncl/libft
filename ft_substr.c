/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:08:15 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/12 18:40:56 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (start > ft_strlen(s))
		return (0);
	if (!(dest = (ft_calloc(1, len + 1))))
		return (0);
	i = -1;
	while (s[++i] && i < len)
		dest[i] = s[start + i];
	return (dest);
}

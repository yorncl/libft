/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:08:43 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/19 13:02:51 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = 0;
	if (!needle[0])
		return (char*)haystack;
	if (!haystack || len == 0)
		return (0);
	while (haystack[i] && needle[j] && len-- > 0)
	{
		if (haystack[i] == needle[j])
		{
			if (j == 0)
				ptr = (char*)(haystack + i);
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (!needle[j] ? ptr : 0);
}

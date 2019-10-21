/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:35:30 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/21 10:32:12 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	char *last;

	str = (char*)s;
	last = 0;
	while (*str)
	{
		if (c == *str)
			last = str;
		str++;
	}
	if (c == '\0')
		return (str);
	if (last)
		return (last);
	return (0);
}

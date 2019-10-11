/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:02:11 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/11 09:56:07 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		incharset(char c, char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (incharset(s1[start], (char *)set))
		start++;
	while (incharset(s1[end], (char *)set))
		end--;
	return ((trimmed = ft_substr(s1, start, end - start + 1)) ? trimmed : 0);
}

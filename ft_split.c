/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:28:17 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/15 11:43:35 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		nbstring(char *s, char c)
{
	int		nb;
	char	*ptr;

	nb = 0;
	ptr = s;
	while (*ptr)
	{
		while (*ptr && *ptr == c)
			ptr++;
		if (*ptr != '\0')
			nb++;
		while (*ptr && *ptr != c)
			ptr++;
	}
	return (nb);
}

static	void	*freebuffs(char **buff)
{
	char **tmp;

	tmp = buff;
	while (*tmp)
		free(tmp++);
	free(buff);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	char	*ptr;
	char	*last;
	char	**strs;
	char	**k;

	ptr = (char*)s;
	if (!(strs = ft_calloc(nbstring(ptr, c) + 1, sizeof(char*))))
		return (0);
	k = strs;
	while (*ptr)
	{
		while (*ptr && *ptr == c)
			ptr++;
		last = ptr;
		while (*ptr && *ptr != c)
			ptr++;
		if (*last && !(*k = ft_calloc(1, (ptr - last + 1) * sizeof(char))))
			return (freebuffs(strs));
		ft_memcpy(*k, last, ptr - last);
		k++;
	}
	return (strs);
}

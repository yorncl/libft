/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:28:10 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/09 19:10:35 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s1);
	if (!(ptr = malloc((len + 1) * sizeof(char))))
		return (0);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}
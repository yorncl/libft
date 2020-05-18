/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:50:16 by mclaudel          #+#    #+#             */
/*   Updated: 2020/03/12 16:06:54 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_dictget(t_dict *dict, char *key)
{
	size_t len;

	len = ft_strlen(key) + 1;
	while (dict)
	{
		if (ft_strncmp(key, dict->key, len) == 0)
			return (dict->value);
		dict = dict->next;
	}
	return (0);
}

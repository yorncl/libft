/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:38:13 by mclaudel          #+#    #+#             */
/*   Updated: 2020/03/12 16:06:48 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dict			*ft_dictnew(char *key, void *value)
{
	t_dict *new;

	if (!(new = ft_calloc(1, sizeof(t_dict))))
		return (0);
	new->key = key;
	new->value = value;
	return (new);
}

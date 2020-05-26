/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:58:23 by mclaudel          #+#    #+#             */
/*   Updated: 2020/05/26 14:37:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_dictclear(t_dict *dict, void (*del)(void *))
{
	t_dict	*tofree;

	while (dict)
	{
		tofree = dict;
		dict = dict->next;
		if (del)
		{
			del(tofree->key);
			del(tofree->value);
		}
		free(tofree);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictrem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:50:16 by mclaudel          #+#    #+#             */
/*   Updated: 2020/03/12 16:06:54 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void 	ft_dictrem(t_dict **dict, char *key, void (*del)(void *))
{

	t_dict *curr;
	t_dict *torem;

	if (!dict || !*dict)
		return ;
	if (ft_strcmp((*dict)->key, key) == 0)
	{
		torem = *dict;
		*dict = (*dict)->next;
	}
	else
	{
		curr = *dict;
		while (curr->next)
		{
			if (ft_strcmp(curr->next->key, key) == 0)
			{
				torem = curr->next;
				curr->next = torem->next;
				ft_dictdelone(torem, del);
				return ;
			}
			curr = curr->next;
		}
	}
}

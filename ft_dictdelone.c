/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:50:16 by mclaudel          #+#    #+#             */
/*   Updated: 2020/03/12 16:06:54 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	check_elems(t_dict *curr, char *key, void (*del)(void *))
{
	t_dict *next;

	next = curr->next;
	while (next)
	{
		if (ft_strcmp(key, next->key) == 0)
		{
			curr->next = next->next;
			if (del)
			{
				del(next->key);
				del(next->value);
			}
			free(next);
			return ;
		}
		curr = curr->next;
		next = next->next;
	}
}

void 	ft_dictdelone(t_dict **dict, char *key, void (*del)(void *))
{
	t_dict *curr;

	curr = *dict;
	if (ft_strcmp(key, curr->key) == 0)
	{
		*dict = (*dict)->next;
		if (del)
		{
			del(curr->key);
			del(curr->value);
		}
		free(curr);
		return ;
	}
	check_elems(curr, key, del);
}

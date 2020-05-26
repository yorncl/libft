/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictrem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 14:35:24 by user42            #+#    #+#             */
/*   Updated: 2020/05/26 14:36:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dictrem(t_dict **dict, char *key, void (*del)(void *))
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

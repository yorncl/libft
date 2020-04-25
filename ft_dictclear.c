/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:58:23 by mclaudel          #+#    #+#             */
/*   Updated: 2020/03/12 16:07:05 by mclaudel         ###   ########.fr       */
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
			del(tofree);
		free(tofree);
	}
}

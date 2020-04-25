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

void 	ft_dictrem(t_dict **dict, char *key, void (*del)(void *))
{
	t_dict *torem;

	if ((torem = ft_dictget(*dict, key)))
	{
		if (torem == *dict)
		{
			*dict = (*dict)->next;
		}
		ft_dictdelone(torem, del);
	}
}

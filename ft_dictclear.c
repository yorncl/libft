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

void			ft_dictclear(t_dict *dict)
{
	t_dict	*tofree;

	while (dict)
	{
		tofree = dict;
		dict = dict->next;
		ft_bzero(tofree, sizeof(t_dict));
		free(tofree);
	}
}

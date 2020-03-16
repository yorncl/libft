/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:44:02 by mclaudel          #+#    #+#             */
/*   Updated: 2020/03/12 16:07:00 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dictadd(t_dict **dict, t_dict *new)
{
	t_dict	*p;

	if (!*dict || new == 0)
		return ;
	p = *dict;
	while (p->next)
		p = p->next;
	p->next = new;
}

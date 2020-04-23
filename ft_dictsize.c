/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:58:23 by mclaudel          #+#    #+#             */
/*   Updated: 2020/03/12 16:07:05 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_dictsize(t_dict *dict)
{
	int size;

	size = 0;
	while (dict)
	{
		dict = dict->next;
		size++;
	}
	return (size);
}

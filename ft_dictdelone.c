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
#include <stdio.h>


void 	ft_dictdelone(t_dict *dict, void (*del)(void *))
{
	if (del)
	{
		del(dict->key);
		del(dict->value);
	}
	ft_bzero(dict, sizeof(t_dict));
	free(dict);
}

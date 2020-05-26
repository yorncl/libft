/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:50:16 by mclaudel          #+#    #+#             */
/*   Updated: 2020/05/26 14:43:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dictdelone(t_dict *dict, void (*del)(void *))
{
	if (del)
	{
		del(dict->key);
		del(dict->value);
	}
	ft_bzero(dict, sizeof(t_dict));
	free(dict);
}

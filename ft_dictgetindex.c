/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictgetindex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:50:16 by mclaudel          #+#    #+#             */
/*   Updated: 2020/03/12 16:06:54 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dict			*ft_dictgetindex(t_dict *dict, int i)
{
	while (dict && i-- > 0)
		dict = dict->next;
	return (dict);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:44:19 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/15 15:08:24 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list*	ft_lstaddnew_back(t_list **alst, void *content)
{

	t_list* new = ft_lstnew(content);
	if (new == NULL)
		return NULL;
	ft_lstadd_back(alst, new);
	return new;
}

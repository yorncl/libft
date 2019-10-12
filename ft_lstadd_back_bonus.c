/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:44:19 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/12 15:04:02 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *ptr;

	if (!alst || !new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	ptr = *alst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}

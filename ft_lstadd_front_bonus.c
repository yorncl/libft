/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:02:02 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/11 18:46:01 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}

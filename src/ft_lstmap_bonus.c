/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:35:32 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/11 13:47:34 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <libft_bonus.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void*))
{
	t_list *newl;
	t_list *ptr;

	if (!f || !lst)
		return (0);
	newl = lst;
	ptr = newl;
	while (ptr)
	{
		ptr = f(ptr);
		ptr = ptr->next;
	}
	return (newl);
}

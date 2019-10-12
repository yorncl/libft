/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:24:41 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/11 13:33:27 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_BONUS
#define LIBFT_BONUS

#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct	s_list *next;
} t_list;

t_list 	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
void 	ft_lstdelone(t_list *lst, void (*del)(void*));
void 	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void*));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void*));
t_list *ft_lstmap(t_list *lst, t_list *(*f)(void*));
#endif
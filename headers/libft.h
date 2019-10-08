/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:06:26 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/08 16:41:29 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dst, const void *src, size_t n);
void 	*ft_memccpy(void * dst, const void *src, int c, size_t n);
void 	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlen(char *str);
int		ft_atoi(char *str);
#endif
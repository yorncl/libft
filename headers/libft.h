/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:06:26 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/08 14:15:18 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT

void	*ft_memset(void *b, int c, unsigned int len);
void	ft_bzero(void *s, unsigned int n);
void 	*ft_memcpy(void *dst, const void *src, unsigned int n);
void 	*ft_memccpy(void * dst, const void *src, int c, unsigned int n);

#endif
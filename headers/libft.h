/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:06:26 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/09 13:36:18 by mclaudel         ###   ########.fr       */
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
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int     ft_isascii(int c);
int		ft_atoi(char *str);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
char 	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);
int		ft_strncmp(char *s1, char *s2, size_t n);
size_t     strlcpy(char *dst, const char *src, size_t dstsize);
size_t     strlcat(char *dst, const char *src, size_t dstsize);
#endif
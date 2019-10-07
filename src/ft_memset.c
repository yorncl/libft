/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:12:55 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/07 17:02:10 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h> 

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *src;

	src = b;
	while (len-- > 0)
		*src++ = (unsigned char)c;
	return b;
}


void	test(void)
{
	printf("-------------------------- Bonjour -----------------------");
}
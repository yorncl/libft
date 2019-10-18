/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:12:18 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/18 12:04:46 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	if (!(ptr = malloc(count * size)))
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

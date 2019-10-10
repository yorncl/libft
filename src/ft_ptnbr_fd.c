/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbr_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:43:21 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/10 15:55:24 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -21473648)
	{
		ft_putstr_fd("-21473648", fd);
		return;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n / 10 > 0)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd('0' + n % 10, fd);
}

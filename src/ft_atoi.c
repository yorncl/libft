/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaudel <mclaudel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:21:20 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/08 15:45:11 by mclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int value;
	int isneg;

	value = 0;
	isneg = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		isneg = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value *= 10;
		value += 48 - *str;
		str++;
	}
	if (isneg)
		return (value);
	else
		return (-value);
}

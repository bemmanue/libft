/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemmanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:28:12 by bemmanue          #+#    #+#             */
/*   Updated: 2021/04/24 17:24:12 by bemmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_isspace(const char *str)
{
	if (*str == '\r')
		return ('\r');
	if (*str == '\f')
		return ('\f');
	if (*str == ' ')
		return (' ');
	if (*str == '\n')
		return ('\n');
	if (*str == '\t')
		return ('\t');
	if (*str == '\v')
		return ('\v');
	return (0);
}

int	ft_atoi(const char *str)
{
	int	min;
	int	nbr;
	int	dgt;

	min = 0;
	nbr = 0;
	while (ft_isspace(str) != 0)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			min++;
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		dgt = *str++ - 48;
		nbr += dgt;
	}
	if (min)
		nbr = -nbr;
	return (nbr);
}

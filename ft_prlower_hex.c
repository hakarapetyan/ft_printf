/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prlower_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:55:40 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/27 18:03:48 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_upper(int c)
{
	if (c == 10)
		write(1, "a", 1);
	if (c == 11)
		write(1, "b", 1);
	if (c == 12)
		write(1, "c", 1);
	if (c == 13)
		write(1, "d", 1);
	if (c == 14)
		write(1, "e", 1);
	if (c == 15)
		write(1, "f", 1);
	return (1);
}

int	ft_prlower_hex(unsigned int h)
{
	char	k;
	int		count;

	k = 0;
	count = 0;
	if (h == 0)
	{
		write(1, "0", 1);
		count++;
	}
	else if (h >= 16)
	{
		count += ft_prlower_hex(h / 16);
		count += ft_prlower_hex(h % 16);
	}
	else if (h >= 10 && h <= 15)
		count += ft_upper(h);
	else
	{
		k = h + '0';
		write (1, &k, 1);
		count++;
	}
	return (count);
}

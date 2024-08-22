/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prupper_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:07:22 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/27 18:06:16 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_upper(int c)
{
	if (c == 10)
		write(1, "A", 1);
	if (c == 11)
		write(1, "B", 1);
	if (c == 12)
		write(1, "C", 1);
	if (c == 13)
		write(1, "D", 1);
	if (c == 14)
		write(1, "E", 1);
	if (c == 15)
		write(1, "F", 1);
	return (1);
}

int	ft_prupper_hex(unsigned int h)
{
	char	k;
	int		count;

	k = 0;
	count = 0;
	if (h == 0)
	{
		write(1, "0", 1);
		count = 1;
	}
	else if (h >= 16)
	{
		count += ft_prupper_hex(h / 16);
		count += ft_prupper_hex(h % 16);
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

/*int main(){
	ft_prupper_hex(21);
}*/
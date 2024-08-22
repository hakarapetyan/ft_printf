/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:57:49 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/28 15:57:59 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(int l)
{
	char	k;
	int		count;
	long	h;

	k = 0;
	count = 0;
	h = l;
	if (h < 0)
	{
		count += ft_prchar('-');
		h = -h;
	}
	if (h > 9)
	{
		count += ft_print(h / 10);
		count += ft_print(h % 10);
	}
	else
	{
		k = h + '0';
		write (1, &k, 1);
		count++;
	}
	return (count);
}

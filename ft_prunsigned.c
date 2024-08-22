/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prunsigned.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:41:38 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/27 18:04:14 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prunsigned(unsigned int h)
{
	char	k;
	int		count;

	k = 0;
	count = 0;
	if (h > 9)
	{
		count += ft_prunsigned(h / 10);
		count += ft_prunsigned(h % 10);
	}
	else
	{
		k = h + '0';
		write (1, &k, 1);
		count++;
	}
	return (count);
}

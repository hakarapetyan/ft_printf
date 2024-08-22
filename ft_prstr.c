/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:55:50 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/25 15:08:05 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prstr(char *c)
{
	int	i;

	i = 0;
	if (!c)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (c[i])
	{
		write (1, &c[i], 1);
		i++;
	}
	return (i);
}

/*int main()
{
	char k[] = "kdfgugf hkugr";
	printf("%s\n" , k );
	ft_prstr(k);
}*/

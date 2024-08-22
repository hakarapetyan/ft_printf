/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:55:27 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/27 16:40:01 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "ft_printf.h"

int	ft_prchar(char c)
{
	write(1, &c, 1);
	return (1);
}

// int main()
// {
// 	char k;
// 	k = 'k';
// 	printf("%c\n" , k );
// 	ft_prchar(k);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:10:46 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/28 17:33:20 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check(char format, va_list args )
{
	int	count;

	count = 0;
	if (format == 'd')
		count += ft_prdec(va_arg(args, int));
	else if (format == 'i')
		count += ft_print(va_arg(args, int));
	else if (format == 'x')
		count += ft_prlower_hex(va_arg(args, unsigned int));
	else if (format == 'X')
		count += ft_prupper_hex(va_arg(args, unsigned int));
	else if (format == 's')
		count += ft_prstr(va_arg(args, char *));
	else if (format == 'c')
		count += ft_prchar(va_arg(args, unsigned int));
	else if (format == 'p')
		count += prvoid_hex(va_arg(args, unsigned long long));
	else if (format == 'u')
		count += ft_prunsigned(va_arg(args, unsigned int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			count += ft_prchar(*format);
		else if (*format == '%' && *(format + 1) == '%')
		{
			count += ft_prchar('%');
			format++;
		}
		else if (*format == '%' && *(format + 1))
		{
			format++;
			count += check(*format, args);
		}
		format++;
	}
	va_end(args);
	return (count);
}

/*int main()
 {
 	ft_printf("\noriginal\n");
 	int i = printf("the '%%%%' is used to print a %% in printf\n");
 	ft_printf("\nmine\n");
 	int k =  ft_printf("the '%%%%' is used to print a %% in printf");
 	printf("\n%i -original- \n",i);
 	printf("\n%i -mine- \n",k);
 }*/

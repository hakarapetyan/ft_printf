/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:03:52 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/27 18:21:44 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_prchar(char c);
int	ft_prstr(char *c);
int	ft_prdec(int l);
int	ft_print(int h);
int	prvoid_hex(unsigned long long h);
int	ft_prlower_hex(unsigned int h);
int	ft_prupper_hex(unsigned int h);
int	ft_prunsigned(unsigned int h);
int	ft_printf(const char *format, ...);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:18:46 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/14 20:24:18 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

int	ft_word(char *s);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(long n);
int	ft_printhex(unsigned long n, char c);
int	ft_printp(unsigned long n);
int	ft_checkp(va_list ap);
int	ft_condi(char s, va_list ap);
int	ft_printf(const char *s, ...);

#endif

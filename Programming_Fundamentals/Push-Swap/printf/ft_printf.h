/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 13:54:52 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 13:54:54 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putnbr(int n, int *len);
void	ft_put_unsigned(unsigned int n, int *len);
void	ft_puthex(unsigned int n, int *len);
void	ft_putuhex(unsigned int n, int *len);
void	ft_putaddr(void *ptr, int *len);
int		ft_printf(const char *format, ...);

#endif
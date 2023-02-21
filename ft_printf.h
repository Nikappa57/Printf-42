/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzogaudino <lorenzogaudino@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:47:44 by lorenzogaud       #+#    #+#             */
/*   Updated: 2023/02/19 22:54:00 by lorenzogaud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_putarg(char type, va_list *ap);

void	ft_puthex_print(unsigned int n, const char type);
void	ft_putptr_print(unsigned long n);
void	ft_putunbr_print(unsigned int n);

int		ft_lenhex(unsigned int n);
int		ft_lenptr(unsigned long n);
int		ft_lenunbr(unsigned int nbr);

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_puthex(unsigned int n, const char type);
int		ft_putptr(unsigned long n);
int		ft_putnbr(int n);
int		ft_putunbr(unsigned int n);
#endif

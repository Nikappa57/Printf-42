/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzogaudino <lorenzogaudino@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:49:36 by lorenzogaud       #+#    #+#             */
/*   Updated: 2023/02/16 22:22:18 by lorenzogaud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putarg(char type, void *arg)
{
	if (type == 'c')
		ft_putchar_fd(((char *)arg), 1);
	else if (type == 's')
		ft_putstr_fd((char *)arg, 1);
	else if (type == 'd')
		ft_putnbr_fd(*((int *)arg), 1);
	return (0);
}

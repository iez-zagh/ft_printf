/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:59:21 by iez-zagh          #+#    #+#             */
/*   Updated: 2023/11/21 04:20:36 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base1(unsigned int nbr, char symbol, int *len)
{
	char			*base;
	unsigned int	b_len;

	b_len = 16;
	if (symbol == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < b_len)
		ft_putchar1(base[nbr % b_len], len);
	else
	{
		ft_putnbr_base1(nbr / b_len, symbol, len);
		ft_putnbr_base1(nbr % b_len, symbol, len);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:30:54 by iez-zagh          #+#    #+#             */
/*   Updated: 2023/11/21 04:21:33 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr1(int nbr, int *len)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		ft_putchar1('-', len);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar1(n + '0', len);
	}
	else
	{
		ft_putnbr1(n / 10, len);
		ft_putnbr1(n % 10, len);
	}
}

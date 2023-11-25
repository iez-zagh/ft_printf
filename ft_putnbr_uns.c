/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:35:00 by iez-zagh          #+#    #+#             */
/*   Updated: 2023/11/24 15:17:21 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_uns(unsigned int nbr, int *len)
{
	if (nbr < 10)
		ft_putchar(nbr + '0', len);
	else 
	{
		ft_putnbr_uns(nbr / 10, len);
		ft_putnbr_uns(nbr % 10, len);
	}
}

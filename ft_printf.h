/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:40:56 by iez-zagh          #+#    #+#             */
/*   Updated: 2023/11/21 12:41:24 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_putchar1(char c, int *len);
void	ft_putnbr1(int nbr, int *len);
void	ft_putstr1(const char *str, int *len);
void	ft_putnbr_base1(unsigned int nbr, char symbol, int *len);
void	ft_print_adress(unsigned long long nbr, int *len);
void	ft_putnbr_uns(unsigned int nbr, int *len);

#endif
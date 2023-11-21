/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:55:02 by iez-zagh          #+#    #+#             */
/*   Updated: 2023/11/21 15:50:10 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print(char c, va_list ags1, int *len)
{
	if (c == 'd' || c == 'i')
		ft_putnbr1(va_arg(ags1, int), len);
	else if (c == 'c')
		ft_putchar1(va_arg(ags1, int), len);
	else if (c == 's')
		ft_putstr1(va_arg(ags1, char *), len);
	else if (c == '%')
		ft_putchar1(c, len);
	else if (c == 'x' || c == 'X')
		ft_putnbr_base1(va_arg(ags1, unsigned int), c, len);
	else if (c == 'p')
	{
		ft_putstr1("0x", len);
		ft_print_adress(va_arg(ags1, unsigned long long), len);
	}
	else if (c == 'u')
		ft_putnbr_uns(va_arg(ags1, unsigned int), len);
}
// • %c Prints a single character.
// • %s Prints a string (as defined by the common C convention).
// • %p The void * pointer argument has to be printed in hexadecimal format.
// • %d Prints a decimal (base 10) number.
// • %i Prints an integer in base 10.
// • %u Prints an unsigned decimal (base 10) number.
// • %x Prints a number in hexadecimal (base 16) lowercase format.
// • %X Prints a number in hexadecimal (base 16) uppercase format.
// • %% Prints a percent sign.
int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ags;

	i = 0;
	va_start(ags, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			print (*str, ags, &i);
		}
		else
		{
			write(1, str, 1);
			i++;
		}
		str++;
	}
	va_end (ags);
	return (i);
}
int main(){
	printf ("hhhhhh%");
	int x=  printf ("hhhhhh%");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:07:11 by soabbas           #+#    #+#             */
/*   Updated: 2022/06/01 15:24:41 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa(unsigned int p, char *base, int *i)
{
	if (p < 16)
		ft_putchar(base[p], i);
	else
	{
		print_hexa(p / 16, base, i);
		print_hexa(p % 16, base, i);
	}
}

void	convert(unsigned long adr, int *i)
{
	char	*base;

	base = "0123456789abcdef";
	if (adr < 16)
		ft_putchar(base[adr], i);
	else
	{
		convert(adr / 16, i);
		convert(adr % 16, i);
	}
}

void	print_hexa_p(void *p, int *i)
{
	unsigned long	adr;

	if (!p)
		ft_putstr("(nil)", i);
	else
	{
		adr = (unsigned long)p;
		ft_putstr("0x", i);
		convert(adr, i);
	}
}

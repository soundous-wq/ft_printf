/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:36:48 by soabbas           #+#    #+#             */
/*   Updated: 2022/05/30 19:08:49 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c, int *i)
{
	write(1, &c, 1);
	(*i)++;
}

void	ft_putstr(char *str, int *i)
{
	int	j;

	j = 0;
	if (!str)
	{
		ft_putstr("(null)", i);
		return ;
	}
	while (str[j])
		ft_putchar(str[j++], i);
}

void	ft_putnbr(int nb, int *i)
{
	long long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-', i);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, i);
		ft_putnbr(nbr % 10, i);
	}
	else
		ft_putchar(nbr + '0', i);
}

void	ft_putunbr(unsigned int nbr, int *i)
{
	if (nbr > 9)
	{
		ft_putunbr(nbr / 10, i);
		ft_putunbr(nbr % 10, i);
	}
	else
		ft_putchar(nbr + '0', i);
}

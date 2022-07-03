/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:37:34 by soabbas           #+#    #+#             */
/*   Updated: 2022/05/31 18:42:51 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putchar(int c, int *i);
void	print_hexa(unsigned int p, char *base, int *i);
void	ft_putunbr(unsigned int nbr, int *i);
void	ft_putnbr(int nb, int *i);
void	ft_putstr(char *str, int *i);
void	print_hexa_p(void *p, int *i);
void	convert(unsigned long adr, int *i);
void    ft_params(va_list params, const char *str, int *i);
int		ft_printf(const char *str, ...);

#endif

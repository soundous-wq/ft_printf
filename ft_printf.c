/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:40:06 by soabbas           #+#    #+#             */
/*   Updated: 2022/06/01 15:21:11 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_params(va_list params, const char *str, int *i)
{
	if (str[0] == 'c')
		ft_putchar(va_arg(params, int), i);
	else if (str[0] == 'd' || str[0] == 'i')
		ft_putnbr(va_arg(params, int), i);
	else if (str[0] == 'u')
		ft_putunbr(va_arg(params, unsigned int), i);
	else if (str[0] == 's')
		ft_putstr(va_arg(params, char *), i);
	else if (str[0] == 'x')
		print_hexa(va_arg(params, unsigned int), "0123456789abcdef", i);
	else if (str[0] == 'X')
		print_hexa(va_arg(params, unsigned int), "0123456789ABCDEF", i);
	else if (str[0] == '%')
		ft_putchar('%', i);
	else if (str[0] == 'p')
		print_hexa_p(va_arg(params, void *), i);
}

int		ft_printf(const char *str, ...)
{
	va_list	params;
	int		i;
	int		j;

	if (!str)
		return (0);
	i = 0;
	j = 0;
	va_start(params, str);
	while (str[j])
	{
		if (str[j] == '%')
			ft_params(params, &str[++j], &i);
		else
			ft_putchar(str[j], &i);
		j++;
	}
	va_end(params);
	return (i);
}

int main()
{
	ft_printf("%s\n", NULL);
	//printf("%s\n", NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:08:33 by aattak            #+#    #+#             */
/*   Updated: 2023/12/23 18:59:07 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_var(va_list ap, char c, int *count, int *i)
{
	if (c == 'c')
		ft_printf_c(va_arg(ap, int), count);
	else if (c == 's')
		ft_printf_s(va_arg(ap, char *), count);
	else if (c == 'p')
	{
		ft_printf_s("0x", count);
		ft_printf_p(va_arg(ap, unsigned long long), "0123456789abcdef", count);
	}
	else if (c == 'd' || c == 'i')
		ft_printf_i(va_arg(ap, int), count);
	else if (c == 'u')
		ft_printf_ui(va_arg(ap, unsigned int), "0123456789", 10, count);
	else if (c == 'x')
		ft_printf_ui(va_arg(ap, unsigned int), "0123456789abcdef", 16, count);
	else if (c == 'X')
		ft_printf_ui(va_arg(ap, unsigned int), "0123456789ABCDEF", 16, count);
	else if (c == '%')
		ft_printf_c('%', count);
	else
		(*i)--;
	(*i) += 2;
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
			ft_printf_var(ap, s[i + 1], &count, &i);
		else
			ft_printf_c(s[i++], &count);
	}
	va_end(ap);
	return (count);
}

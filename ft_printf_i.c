/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:23:52 by aattak            #+#    #+#             */
/*   Updated: 2023/12/23 18:51:35 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_i(int nb, int *count)
{
	if (nb == -2147483648)
	{
		ft_printf_s("-2147483648", count);
		return ;
	}
	if (nb < 0)
	{
		ft_printf_c('-', count);
		nb *= -1;
	}
	if (nb > 9)
		ft_printf_i(nb / 10, count);
	ft_printf_c((nb % 10) + '0', count);
}

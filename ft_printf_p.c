/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:24:36 by aattak            #+#    #+#             */
/*   Updated: 2023/12/23 18:58:03 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_p(unsigned long long p, char *base, int *count)
{
	if (p > 15)
		ft_printf_p(p / 16, base, count);
	ft_printf_c(base[p % 16], count);
}

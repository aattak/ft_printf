/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ui.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:24:02 by aattak            #+#    #+#             */
/*   Updated: 2023/12/23 18:52:32 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_ui(unsigned int ui, char *base, int base_size, int *count)
{
	unsigned int	size;

	size = (unsigned int)base_size;
	if (ui >= size)
		ft_printf_ui(ui / size, base, size, count);
	ft_printf_c(base[ui % size], count);
}

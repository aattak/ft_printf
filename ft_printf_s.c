/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:31:20 by aattak            #+#    #+#             */
/*   Updated: 2023/12/23 19:42:28 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_s(char *s, int *count)
{
	size_t	i;

	if (!s)
	{
		ft_printf_s("(null)", count);
		return ;
	}
	i = 0;
	while (s[i])
		ft_printf_c(s[i++], count);
}

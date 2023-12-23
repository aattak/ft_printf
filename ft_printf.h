/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:46:17 by aattak            #+#    #+#             */
/*   Updated: 2023/12/23 18:50:30 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *s, ...);
void	ft_printf_c(int i, int *count);
void	ft_printf_s(char *s, int *count);
void	ft_printf_p(unsigned long long p, char *base, int *count);
void	ft_printf_i(int nb, int *count);
void	ft_printf_ui(unsigned int ui, char *base, int base_size, int *count);

#endif

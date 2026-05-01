/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:29:51 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 11:30:06 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		len++;
		i++;
	}
	return (len);
}

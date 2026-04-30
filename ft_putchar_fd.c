/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:23:11 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/24 11:26:05 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(int argc, char const *argv[])
//{
//	char	c;

//	c = 'c';
//	ft_putchar_fd(c, 1);
//	return (0);
//}
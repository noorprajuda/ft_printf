/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:26:23 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/24 11:30:04 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putendl_fd(char *s, int fd)
{
	int i;
	char c;

	i = 0;
	while (s[i])
	{
		c = s[i];
		write(fd, &c, 1);
		i++;
	}
	c = '\n';
	write(fd, &c, 1);
}

// int	main(int argc, char const *argv[])
//{
//	ft_putendl_fd("Heilbronn42", 1);
//	return (0);
// }

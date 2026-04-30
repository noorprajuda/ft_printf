/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 02:26:18 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/30 03:04:16 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countdigit(int n)
{
	long	nbr;
	int		count;

	nbr = n;
	count = 0;
	if (nbr <= 0)
	{
		count++;
		if (nbr < 0)
			nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	nbr;

	len = ft_countdigit(n);
	res = malloc (sizeof(char) * (len + 1));
	nbr = n;
	if (!res)
		return ((void *) 0);
	res[len] = '\0';
	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		res[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}

//int	main(int argc, char const *argv[])
//{
//	printf("res : %s", ft_itoa(-2147483648));
//	return (0);
//}

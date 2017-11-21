/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 17:52:14 by vzamyati          #+#    #+#             */
/*   Updated: 2017/11/01 22:08:32 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	
	// REFACTOR THIS!
	
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');

	// if (n < 0)
	// 	ft_putchar('-');
	// if (ABS(n) >= 0 && ABS(n) <= 9)
	// 	ft_putchar(ABS(n) + '0');
	// else
	// {
	// 	ft_putnbr(ABS(n / 10));
	// 	ft_putchar(ABS(n % 10) + '0');
	// }
}

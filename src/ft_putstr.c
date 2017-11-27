/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:31:49 by vzamyati          #+#    #+#             */
/*   Updated: 2017/11/01 14:18:29 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr(char const *str)
{
	int i;

	i = 0;
	if (str)
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
}


int 	main()
{
	char s[] = "My name is Lera";
	ft_putstr(s);
}
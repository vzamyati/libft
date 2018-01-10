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

void	ft_putstr_fd(char const *str, int fd)
{
	int i;

	i = 0;
	if (str)
		while (str[i])
		{
			write(fd, &str[i], 1);
			i++;
		}
}

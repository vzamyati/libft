/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:25:07 by vzamyati          #+#    #+#             */
/*   Updated: 2017/11/10 20:25:09 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int i;
	char *tmp;

	i = 0;
	tmp = (char *)s;
	while (n > 0)
	{
		tmp[i] = 0;
		i++;
		n--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:04:26 by vzamyati          #+#    #+#             */
/*   Updated: 2017/11/10 20:04:29 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*tmp;
	int 	i;

	i = 0;
	tmp = (char *)b;
	while (len > 0)
	{
		tmp[i] = c;
		i++;
		len--;
	}
	return (b);
}
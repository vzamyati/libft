/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:37:41 by vzamyati          #+#    #+#             */
/*   Updated: 2017/11/11 17:37:44 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *s1_tmp;
	unsigned char *s2_tmp;

	i = 0;
	s1_tmp = (unsigned char *)s1;
	s2_tmp = (unsigned char *)s2;
	while (s1_tmp[i] == s2_tmp[i] && i + 1 < n)
		i++;
	if (i == n)
		return (0);
	else
		return (s1_tmp[i] - s2_tmp[i]);
}
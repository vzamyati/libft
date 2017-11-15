/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:36:40 by vzamyati          #+#    #+#             */
/*   Updated: 2017/11/15 18:36:41 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	int i1;

	i = 0;
	i1 = 0;
	while (s1[i1])
		i1++;
	while (s2[i] && i < n)
	{
		s1[i1] = s2[i];
		i++;
		i1++;
	}
	s1[i1] = '\0';
	return (s1);
}

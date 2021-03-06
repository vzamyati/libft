/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 20:51:05 by vzamyati          #+#    #+#             */
/*   Updated: 2017/11/19 20:51:06 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s,void (*f)(unsigned int, char *))
{
	int i;

	i = 0;
	if (s && *s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

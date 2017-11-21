/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 08:49:41 by vzamyati          #+#    #+#             */
/*   Updated: 2017/11/21 08:49:43 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strjoin(char const *s1,char const *s2)
{
	int i;
	int j;
	int len;
	char *res;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	if (!(res = (char *)malloc(sizeof(char) * ((len + ft_strlen(s2)) + 1))))
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	} 
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

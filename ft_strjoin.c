/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:07:33 by pmedina-          #+#    #+#             */
/*   Updated: 2021/03/23 00:32:42 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*x;
	size_t	c1;
	size_t	c2;
	size_t	i;

	i = 0;
	c2 = 0;
	c1 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	x = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!x)
		return (NULL);
	while (c1 != ft_strlen(s1))
	{
		x[i] = s1[c1];
		++i && ++c1;
	}
	while (c2 != ft_strlen(s2))
	{
		x[i] = s2[c2];
		++i && ++c2;
	}
	x[i] = '\0';
	return (x);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:41:25 by pmedina-          #+#    #+#             */
/*   Updated: 2021/03/23 00:13:39 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*o;
	int		c;

	if (!s || !f)
		return (NULL);
	o = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!o)
		return (NULL);
	c = 0;
	while (s[c] != '\0')
	{
		o[c] = f(c, s[c]);
		c++;
	}
	o[c] = '\0';
	return (o);
}

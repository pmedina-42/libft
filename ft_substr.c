/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:50:28 by pmedina-          #+#    #+#             */
/*   Updated: 2021/03/23 00:21:35 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*frase;
	size_t	i;
	size_t	st;

	i = 0;
	st = (size_t)start;
	if (!s)
		return (NULL);
	if (*s == '\0' || st > ft_strlen(s))
		return (ft_strdup(""));
	frase = (char *)malloc(sizeof(char) * (len + 1));
	if (!frase)
		return (NULL);
	while (i < len)
	{
		frase[i] = s[st];
		i++;
		st++;
	}
	frase[i] = '\0';
	return (frase);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:38:17 by pmedina-          #+#    #+#             */
/*   Updated: 2021/03/23 00:08:27 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*memoria;
	size_t	i;

	i = ft_strlen(s1);
	memoria = malloc(i + 1);
	if (!memoria)
		return (NULL);
	ft_memcpy(memoria, s1, i);
	memoria[i] = '\0';
	return (memoria);
}

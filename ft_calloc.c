/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:57:39 by pmedina-          #+#    #+#             */
/*   Updated: 2021/03/23 00:11:14 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memoria;

	memoria = malloc(count * size);
	if (!memoria)
		return (NULL);
	ft_bzero(memoria, count * size);
	return (memoria);
}

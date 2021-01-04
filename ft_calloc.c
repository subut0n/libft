/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:34:09 by addzikow          #+#    #+#             */
/*   Updated: 2021/01/04 16:43:57 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*dest;
	unsigned int	i;

	if (!(dest = malloc(size * count)))
		return (0);
	i = 0;
	while (dest[i])
	{
		ft_bzero(dest, count);
		i++;
	}
	return ((void *)dest);
}

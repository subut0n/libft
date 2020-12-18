/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:03:43 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/18 18:31:58 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srctobyte;
	char	*desttobyte;

	i = 0;
	srctobyte = (char *)src;
	desttobyte = (char *)dest;
	if (!dest || !src)
		return (NULL);
	while (i < n)
	{
		desttobyte[i] = srctobyte[i];
		i++;
	}
	dest = (void *)desttobyte;
	return (dest);
}

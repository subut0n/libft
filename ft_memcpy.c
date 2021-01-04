/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:03:43 by addzikow          #+#    #+#             */
/*   Updated: 2021/01/04 16:52:54 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srctobyte;
	char	*desttobyte;

	if (!dest || !src)
		return(NULL);
	i = 0;
	srctobyte = (char *)src;
	desttobyte = (char *)dest;
	while (i < n)
	{
		desttobyte[i] = srctobyte[i];
		i++;
	}
	dest = (void *)desttobyte;
	return (dest);
}

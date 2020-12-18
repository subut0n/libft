/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:03:06 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/18 14:35:25 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tobyte;

	i = 0;
	tobyte = (unsigned char *)s;
	if (s != NULL)
	{
		while (i < n)
		{
			if (tobyte[i] == (unsigned char)c)
				return ((void *)&tobyte[i]);
			i++;
		}
	}
	return (NULL);
}

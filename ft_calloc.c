/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subuton <subuton@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:34:09 by addzikow          #+#    #+#             */
/*   Updated: 2020/11/27 11:43:18 by subuton          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *dest;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if(!(dest = malloc(size * nmemb)))
		return (NULL);
	i = 0;
	while (dest[i++])
		dest[i] = 0;
	return ((void *)dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@42student.lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:34:09 by addzikow          #+#    #+#             */
/*   Updated: 2021/01/05 10:06:38 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*dest;
	unsigned int	i;

	if (count == 0 || size == 0)
		return (NULL);
	if (!(dest = malloc(size * count)))
		return (0);
	i = 0;
	while (i <= count)
		((char *)dest)[i++] = 0;
	return (dest);
}

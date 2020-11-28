/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:25:13 by addzikow          #+#    #+#             */
/*   Updated: 2020/11/28 14:02:52 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	int compare;

	i = 0;
	if (needle == NULL)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		compare = ft_strncmp(haystack, needle, len);
		if (compare == 0)
			return ((char *)haystack);
		i++;
	}
	return (NULL);
}
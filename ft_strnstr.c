/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subuton <subuton@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:06:46 by addzikow          #+#    #+#             */
/*   Updated: 2020/11/27 11:37:33 by subuton          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little)
{
	int compare;
	
	if (little == NULL)
		return (big);
	compare = 0;
	while (big)
	{
		compare = ft_strncmp(big, little, ft_strlen(little));
		if (compare == 0)
			return (big);
		else
			big++;	
	}
	return (NULL);
}
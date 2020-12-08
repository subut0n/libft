/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:07:14 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/08 15:06:26 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char *tab;
	int i;
	int j;
	int k;
	int size;
	int count;

	i = 0;
	count = 0;
	while (is_set(str[i++], set))
		count++;
	if (count == 0)
		i = 0;
	if (count > 0)
		i = i - 1;
	j = ft_strlen(str) - 1;
	while (is_set(str[j--], set))
		count++;
	size = ft_strlen(str) - count;
	if (!(tab = malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	k = 0;
	j = (i + size);
	while (i != j)
		tab[k++] = str[i++];
	tab[k] = '\0';
	return (tab);
}

#include <stdio.h>

int main(void)
{
	char *str = "          ";
	char *set = "\t \n";
	char *tab;

	tab = ft_strtrim(str, set);
	printf("%s\n", tab);
}

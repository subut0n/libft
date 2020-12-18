/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addzikow <addzikow@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:04:57 by addzikow          #+#    #+#             */
/*   Updated: 2020/12/18 15:04:48 by addzikow         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_numb_strings(char const *s, char c)
{
	int		i;
	int		nbr_words;

	i = 0;
	nbr_words = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			if (!s[i])
				return (nbr_words);
			if (s[i + 1] == c || s[i + 1] == '\0')
				nbr_words++;
			i++;
		}
		i++;
	}
	return (nbr_words);
}

static void	free_malloc(char **tab, int j)
{
	int		i;

	i = 0;
	while (i < j - 1)
	{
		free(tab[i]);
		i++;
	}
}

static int	malloc_strings(char const *s, char c, char **tab)
{
	int		i;
	int		j;
	int		wordlen;

	i = 0;
	j = 0;
	wordlen = 0;
	while (s[i])
	{
		while (s[i + wordlen] != c && s[i + wordlen])
			wordlen++;
		if (wordlen > 0)
		{
			if (!(tab[j++] = malloc(sizeof(char) * (wordlen + 1))))
			{
				free_malloc(tab, j);
				return (0);
			}
			i += wordlen;
		}
		wordlen = 0;
		while (s[i] == c)
			i++;
	}
	return (1);
}

static void	copy_strings(char const *s, char c, char **tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
			tab[j][k++] = s[i++];
		if (k > 0)
		{
			tab[j][k] = '\0';
			j++;
		}
		while (s[i] == c)
			i++;
		k = 0;
	}
}

char		**ft_split(char const *s, char c)
{
	int		nbr_strings;
	char	**tab;
	int		is_malloc_ok;

	nbr_strings = find_numb_strings(s, c);
	if (!(tab = malloc(sizeof(char *) * (nbr_strings + 1))))
		return (NULL);
	tab[nbr_strings] = NULL;
	is_malloc_ok = malloc_strings(s, c, tab);
	if (is_malloc_ok == 0)
	{
		free(tab);
		return (NULL);
	}
	else
		copy_strings(s, c, tab);
	return (tab);
}

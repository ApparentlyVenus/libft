/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:12:43 by odana             #+#    #+#             */
/*   Updated: 2025/05/21 17:21:22 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	*splitter(const char *s, char c)
{
	int		i;
	int		len;
	char	*dup;

	dup = 0;
	i = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (0);
	while (s[i] && s[i] != c)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	char	**strs;

	if (!c || !s)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			strs[j++] = splitter(&s[i], c);
			if (!strs[j - 1])
				free(strs);
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	strs[j] = NULL;
	return (strs);
}

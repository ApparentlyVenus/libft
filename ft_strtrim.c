/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:38:02 by odana             #+#    #+#             */
/*   Updated: 2025/05/21 16:42:44 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	j = ft_strlen(s1);
	if (j == 0)
		return (ft_strdup(""));
	j--;
	while (j >= i && is_set(s1[j], set))
		j--;
	result = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!result)
		return (NULL);
	k = 0;
	while (i <= j)
		result[k++] = s1[i++];
	result[k] = '\0';
	return (result);
}

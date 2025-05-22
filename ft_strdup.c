/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 02:40:32 by odana             #+#    #+#             */
/*   Updated: 2025/05/21 16:42:44 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*dup;

	dup = 0;
	i = 0;
	if (src == 0)
		return (NULL);
	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == 0)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

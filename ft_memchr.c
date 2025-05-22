/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 21:19:06 by odana             #+#    #+#             */
/*   Updated: 2025/05/21 16:54:31 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return ((void *) s + i);
		i++;
	}
	return (0);
}

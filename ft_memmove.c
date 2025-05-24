/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:40:45 by odana             #+#    #+#             */
/*   Updated: 2025/05/24 21:41:22 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*c_dest;
	const char	*c_src;

	if (src == dst)
		return (dst);
	c_dest = (char *)dst;
	c_src = (const char *)src;
	if (c_src < c_dest && c_src + len > c_dest)
		while (len--)
			*(c_dest + len) = *(c_src + len);
	else
	{
		while (len--)
		{
			*c_dest = *c_src;
			c_dest++;
			c_src++;
		}
	}
	return (dst);
}

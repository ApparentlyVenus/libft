/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:24:03 by odana             #+#    #+#             */
/*   Updated: 2025/05/21 16:42:44 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	size_t			i;

	i = 0;
	c_src = (unsigned char *)src;
	c_dest = (unsigned char *)dest;
	while (i < n)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (dest);
}

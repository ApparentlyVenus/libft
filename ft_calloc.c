/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 22:26:31 by odana             #+#    #+#             */
/*   Updated: 2025/05/22 09:49:38 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*result;

	if (n == 0 || size == 0)
	{
		result = (void *)malloc(1);
		return (result);
	}
	if (size && n > __SIZE_MAX__ / size)
		return (NULL);
	result = (void *)malloc(n * size);
	if (!result)
		return (0);
	ft_bzero(result, n * size);
	return (result);
}

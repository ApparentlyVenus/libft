/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 22:26:31 by odana             #+#    #+#             */
/*   Updated: 2025/05/21 16:42:44 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*calloc(size_t n, size_t size)
{
	void	*result;

	if (n == 0 || size == 0)
	{
		result = (void *)malloc(1);
		return (result);
	}	
	result = (void *)malloc(n * size);
	if (!result)
		return (0);
	ft_bzero(result, n * size);
	return (result);
}

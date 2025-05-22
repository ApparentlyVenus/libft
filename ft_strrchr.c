/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 20:25:40 by odana             #+#    #+#             */
/*   Updated: 2025/05/21 17:03:45 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	while (*str)
		str++;
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}

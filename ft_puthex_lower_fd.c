/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:19:06 by odana             #+#    #+#             */
/*   Updated: 2025/05/26 07:18:55 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_lower_fd(unsigned long n, int fd)
{
	int			count;
	const char	*base = "0123456789abcdef";

	count = 0;
	if (n >= 16)
		count += ft_puthex_lower_fd(n / 16, fd);
	ft_putchar_fd(base[n % 16], fd);
	count++;
	return (count);
}

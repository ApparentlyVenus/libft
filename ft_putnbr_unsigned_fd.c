/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 07:36:36 by odana             #+#    #+#             */
/*   Updated: 2025/05/27 07:37:44 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	char	c;

	if (n >= 10)
		ft_putnbr_unsigned_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

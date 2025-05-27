/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:07:33 by odana             #+#    #+#             */
/*   Updated: 2025/05/23 09:09:14 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	is_valid_base(char *base)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{	
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char		result[32];
	long		n;
	size_t		size;
	int			i;

	if (is_valid_base(base))
	{
		size = ft_strlen(base);
		n = nbr;
		if (n < 0)
		{
			ft_putchar_fd('-', 1);
			n = -n;
		}
		i = 0;
		while (n > 0)
		{
			result[i] = base[n % size];
			n = n / size;
			i++;
		}
		while (--i >= 0)
			ft_putchar_fd(result[i], 1);
	}
}

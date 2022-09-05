/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:16:25 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:16:27 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		c = '0' + (nb % 10);
		write(1, &c, 1);
	}
	else
		write(1, "-2147483648", 11);
}

/*void	ft_putnbr(int nbr);
int	main()
{
	ft_putnbr(25);
	ft_putnbr(99);	ft_putnbr(0); 	ft_putnbr(-25);
	return(0);
}*/
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
/* Synopsis:
    Use write to output integer n to required file descriptor(fd)
** Description:
    Outputs the integer ’n’ to the given file
	descriptor.*/

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	buf;

	//check for overbound
	if (n != -2147483648)
	{
		//check negative int, write negative
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		//write int with recursive function, starting from front, 1 digit at a time
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		buf = '0' + (nb % 10);
		write(fd, &buf, 1);
	}
	//write boundary if overbound
	else
		write(fd, "-2147483648", 11);
}
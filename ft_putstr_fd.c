/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:16:41 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:16:42 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Synopsis:
    Use write to output string s to required file descriptor(fd)
** Description:
    Outputs the string ’s’ to the given file
	descriptor.*/

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *character, int fd)
{
	int	i;

	for (i =0; !character[i]; i++)
	{
		write(fd, &character[i], 1);
	}
}

/*int main(int argc, char **argv)
{
	int fd 
	fd = open("test.txt",O_RDWR);
	ft_putstr_fd(argv[1], fd);
}
*/
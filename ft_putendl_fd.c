/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:16:05 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:16:10 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *character, int fd)
{
	int	i;

	i = 0;
	while (character[i] != 0)
	{
		write(fd, &character[i], 1);
		i++;
	}
    write(fd,"/n",1);
}

/*int main(int argc, char **argv)
{
	int fd 
	fd = open("test.txt",O_RDWR);
	ft_putstr_fd(argv[1], fd);
}
*/
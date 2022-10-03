/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:11:58 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 16:12:13 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static int	atoilen(char *snum, int start)
{
	int	length;

	length = 0;
	while (snum[start + length] >= '0' && snum[start + length] <= '9')
		length++;
	return (length);
}

static int	overlength(int negcount, const char *str, int i, long long sigma)
{
	if ((negcount == -1) && ((sigma > (9223372036854775807 / 10))
			|| (sigma == (9223372036854775807 / 10) && str[i] - '0' > 8)))
		return (0);
	else if ((negcount == 1) && ((sigma > (9223372036854775807 / 10))
			|| (sigma == (9223372036854775807 / 10) && str[i] - '0' > 7)))
		return (-1);
	return (0);
}
static int	rec_atoi(char *str, int start)
{
	int			i;
	long long	sigma;
	int			length;
	int			negcount;

	if (str[start] == ' ' || (str[start] >= 9 && str[start] <= 13))
		return (rec_atoi(str, start + 1));
	negcount = 1;
	if (str[start] == '+' || str[start] == '-')
	{
		if (str[start] == '-')
			negcount = -1;
		start++;
	}
	sigma = 0;
	i = 0;
	length = atoilen(str, start);
	while (i < length && length != 0)
	{
		if (sigma > (9223372036854775807 / 10) || (sigma == (9223372036854775807 / 10)\
			&& str[start + i] - '0' > 7))
				return (overlength(negcount, str, start + i, sigma));
		sigma = (str[start + i] - '0') + (sigma * 10);
		i++;
	}
		return (negcount * sigma);
}

int	ft_atoi(char *str)
{
	return (rec_atoi(str, 0));
}

/*int	ft_atoi(char *str);
int	main()
{
	int result = ft_atoi("\t 344dfgdf_-+");
	printf("%d\n", result);
	result = ft_atoi("    -3488dfgf9-34787 ");
	printf("%d\n", result);
	result = ft_atoi("  +-  2344 344  ");
	printf("%d\n", result);

	return(0);
}*/
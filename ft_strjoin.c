/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:17:51 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:17:52 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		c;

	str = (char *)malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			str[c++] = sep[j++];
		}
		i++;
	}
	str[c] = '\0';
	return (str);
}

/*#include<stdio.h>
int	main(void)
{
	char	*tab[0];
	char	*k[20];	

	printf("%s", ft_strjoin(0, tab, "\t|\t"));
	free(tab);
	return (0);
}*/


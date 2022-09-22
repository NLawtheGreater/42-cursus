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
#include<stdio.h>


char	*ft_strjoin(char const *s1, char const *s2)
{
	char*	ptr;
	int		i;
	int		k;
	//malloc ptr with size of s1+s2
	ptr = (char *)malloc(sizeof(char)*(ft_strlen((char*)s1)+ft_strlen((char*)s2)));
	//return NULL if allocation fail
	if (!ptr)
		return('\0');
	//copy s1 to ptr with for loop, same positions with i
	for (i = 0; !s1[i]; i++) 
		ptr[i] = s1[i];
	//continue to copy s2 to ptr with for loop
	for (k = 0; !s2[k]; k++, i++) 
		ptr[i] = s2[k];
	//*check NULL terminate string?
	ptr[i] = '\0';
	//return new string
	return (ptr);
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


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


	//malloc ptr with size of s1+s2
	//return NULL if allocation fail
	//copy s1 to ptr with for loop, same positions with i
	//continue to copy s2 to ptr with for loop
	//*check NULL terminate string?
	//return new string
char	*ft_strjoin(char const *s1, char const *s2)
{
	char *	ptr;
	int		i;
	int		k;
	
	ptr = (char *)malloc(sizeof(char)*(ft_strlen((char*)s1)+ft_strlen((char*)s2)));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	} 
	k = 0; 
	while (s2[k])
	{
		ptr[i] = s2[k];
		k++; 
		i++;
	} 
	ptr[i] = '\0';
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
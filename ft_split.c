/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:16:56 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:16:58 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** LIBRARY: N/A
** SYNOPSIS: split string, with specified character as delimiter, into an array
**			of strings
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns an array of strings obtained by
**	splitting ’s’ using the character ’c’ as a delimiter. The array must be
**	ended by a NULL pointer.
*/
#include "libft.h"
#include <stdio.h>


/*	1.look through string
	2.check if it is not like c & switch is off
	3.turn switch on, count word
	4.finds c, turns switch off
*/
static int	count_words(const char *str, char c)
{
	int count;
	int	trig;

	count = 0;
	trig = 0;
	while (*str)
	{
		if (*str != c && trig == 0)
		{
			trig = 1;
			count++;
		}
		else if (*str == c)
			trig = 0;
		str++;
	}
	return (count);
}

/*	1.Search through s using index i
	2.look for the first instance s[i] is unequal to c: the start of the word.
	 switch turns on and record position of start of word
	3.look for the first instances[i] is equal to c (check switch 
		for on): the end of the word.
	4.record the word into split with (*check 2d array) 
	5.switch turns off
    6.*closes 2d array with NULL, necessary?
*/	
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int	trig;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	trig = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && trig < 0)
			trig = i;
        else if ((s[i] == c || i == ft_strlen((char *)s)) && trig >= 0)
		{
			ft_strlcpy(split[j++], (char *)(s+trig), i);
			trig = -1;
		}
		i++;
	}
	split[j] = '\0';
	return (split);
}
    //return word
    //check if string or memallocation with number of words is NULL, if yes, return NULL
/*
#include <stdio.h>

void	print_words(char **words)
{
	while (*words != NULL)
	{
		printf("'%s'\n", *words);
		words++;
	}
}

void	test(char *str, char *charset)
{
	//print argument 1 and 2
	printf("%s\n%s\n", str, charset);
	//print split array 1 row at a time
	print_words(ft_split(str, charset));
}

int	main(void)
{
	test("God is,great.AND#ALMIGHTY$over%the^cat&ises*", "., !@#$%^&*()");
	return (0);
}
*/


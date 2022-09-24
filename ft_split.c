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
#include "libft.h"
#include <stdio.h>

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
static int	count_words(const char *str, char c)
{
	int i;
	int	trig;

	i = 0;
	trig = 0;
    //look through string
	while (*str)
	{
        //check if it is not like c & switch is off
		if (*str != c && trig == 0)
		{
            //turn switch on, count word
			trig = 1;
			i++;
		}
        //finds c, turns switch off
		else if (*str == c)
			trig = 0;
		str++;
	}
	return (i);
}

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
    //Search through s using index i
	while (i <= ft_strlen((char *)s))
	{
        //look for the first instance s[i] is unequal to c: the start of the word. switch turns on and record position of start of word
		if (s[i] != c && trig < 0)
			trig = i;
		//look for the first instances[i] is equal to c (check switch for on): the end of the word.
        else if ((s[i] == c || i == ft_strlen((char *)s)) && trig >= 0)
		{
            //record the word into split with (*check 2d array) 
			ft_strlcpy(split[j++], (char *)&s[i], i);
            //switch turns off
			trig = -1;
		}
		i++;
	}
    /*closes 2d array with NULL, necessary?
	split[j] = 0;*/
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


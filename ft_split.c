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
#include <stdlib.h>

int	in_charset(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	in_word;
	int	word_count;

	in_word = 0;
	word_count = 0;
	while (*str != '\0')
	{
		if (!in_word && !in_charset(*str, charset))
		{
			in_word = 1;
			word_count++;
		}
		else if (in_word && in_charset(*str, charset))
		{
			in_word = 0;
		}
		str++;
	}
	return (word_count);
}

int	word_length(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str != '\0' && !in_charset(*str, charset))
	{
		count++;
		str++;
	}
	return (count);
}

void	split_words(char **words, char *str, char *charset)
{
	int		in_word;
	int		word_count;
	char	*word_iter;

	in_word = 0;
	word_count = 0;
	while (*str != '\0')
	{
		if (!in_charset(*str, charset))
		{
			if (!in_word)
			{
				words[word_count] = malloc(word_length(str, charset));
				word_iter = words[word_count];
				word_count++;
			}
			in_word = 1;
			*word_iter = *str;
			word_iter++;
		}
		else if (in_charset(*str, charset))
			in_word = 0;
		*(word_iter + 1) = '\0';
		str++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		word_count;

	if (str == NULL || charset == NULL)
	{
		words = malloc(sizeof(char *));
		words[0] = NULL;
		return (words);
	}
	word_count = count_words(str, charset);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words != NULL)
	{
		split_words(words, str, charset);
		words[word_count] = NULL;
	}
	return (words);
}

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
	printf("%s\n%s\n", str, charset);
	print_words(ft_split(str, charset));
}

int	main(void)
{
	test("God is,great.AND#ALMIGHTY$over%the^cat&ises*", "., !@#$%^&*()");
	return (0);
}
*/


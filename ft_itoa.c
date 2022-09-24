/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:14:42 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/02 17:14:44 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Synopsis:
    Represent integer as string
** Description:
    Allocates (with malloc(3)) and returns a string
**  representing the integer received as an argument.
**  Negative numbers must be handled.*/
#include "libft.h"
#include <stdio.h>

    int	ft_count(int n)
{
	int	i;

    //check if n is 0, only one char needed
    if (n == 0)
		return (1);
	//check if n is negative, add char count if negative
    i = (n < 0); 
	//check char count with n/10 loop
    while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	cp;
	char			*res;

    //count char amount
	i = ft_count(n) - 1;
	//malloc with char count and check
    res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	//add null
    res[i + 1] = '\0';
	//check negative sign, add negative sign accordingly
    if (n < 0)
		res[0] = '-';
    //copy unsigned version of n, with ternaty check
    cp =  n<0 ? -1*n : n;
	//loop and record int into string, using ASCII representation of int. Use BOOLEAN result of negative n to control loop
    while (i >= (n < 0))
	{
		res[i] = (cp % 10) + '0';
		cp /= 10;
		i--;
	}
	return (res);
}

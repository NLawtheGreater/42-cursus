/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclaw <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:59:38 by niclaw            #+#    #+#             */
/*   Updated: 2022/09/24 13:59:53 by niclaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRINTF_H
# define PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	int		minus;
	int		plus;
	int		space;
	int		zero;
	int		hash;
	int		dot;
	int		width;
	int		pcs;
	char	type;
}			t_format;

# define F_TYPE "cspdiuxX%"

int		ft_printf(const char *, ...);

#endif

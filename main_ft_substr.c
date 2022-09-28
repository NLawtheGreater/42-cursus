#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;

	strsub = ft_substr(str, 400, 20);
	printf("%s\n",strsub);
}
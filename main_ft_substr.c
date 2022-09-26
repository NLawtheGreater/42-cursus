#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;

	strsub = ft_substr(str, 0, 10);
	printf("%s\n",strsub);
	strsub = ft_substr(str, 7, 10);
	printf("%s\n",strsub);
}
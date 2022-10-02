#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
char *dst;
char *src;

dst = NULL;
src = NULL;

ft_memcpy(dst, src, 0);
write(1, dst, 5);
return (0);
}
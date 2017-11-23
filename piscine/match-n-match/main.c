#include "../libft/libft.h"
#include <stdio.h>
#include "ex00/match.c"
#include "ex01/nmatch.c"

int		main(void)
{
	printf("%d\n", nmatch("a***a", "**"));
	printf("%d\n", nmatch("test", "*t"));
	printf("%d\n", nmatch("test", "*t*"));
	printf("%d\n", nmatch("test", "t*t"));
	printf("%d\n", nmatch("test", "*test*"));
	printf("%d\n", nmatch("main.c", "*.c"));
	printf("%d\n", nmatch(" main.c", "   *.c"));
	printf("%d\n", nmatch(NULL, NULL));
	printf("%d\n", nmatch("test", "t**"));
	printf("%d\n", nmatch("abcd", "*bd"));
	printf("%d\n", nmatch("*ddt", "*t*"));
	printf("%d\n", nmatch("ddt*", "*t*"));
	printf("%d\n", nmatch("abcbd", "*b"));
	printf("%d\n", nmatch("abc", "a**"));


//	ft_putnbr(match("a****a", "**"));

	/********************************/
//	ft_putchar('\n');
//	ft_putchar('\n');
	/********************************/
//	ft_putnbr(nmatch("a****a", "**"));
	return (0);
}

#include "libft.h"

void	c141_hr(char c, int len)
{
	while (len--)
		ft_putchar(c);
	ft_putchar('\n');
}

void	c141_hr_padded_str(char *str, char c, int len)
{
	ft_putchar(c);
	ft_putchar(' ');
	ft_putstr(str);
	while ((len--) - (ft_strlen(str) + 3))	
		ft_putchar(' ');
	ft_putchar(c);
	ft_putchar('\n');
}

void	c141_hr_banner(char *name, char motif, int len)
{
	ft_putchar('\n');
	c141_hr(motif, len);
	c141_hr_padded_str(name, motif, len);
	c141_hr(motif, len);
}

void	c141_hr_banner_project(char *name, char motif, int len)
{
	c141_hr(motif, len);
	c141_hr_padded_str(name, motif, len);
	c141_hr(motif, len);
}

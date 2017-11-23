#include "libft.h"

#include "ex00/ft_split_whitespaces.c"
#include "ex03/ft_abs.h"

#include "ex05/ft_param_to_tab.c"
#include "ex05/ft_stock_par.h"

#include "ex06/ft_show_tab.c"
#include "ex06/ft_stock_par.h"
/*----------------------------------------------------------------------------*/

void	ft_print_tab_int(int *tab, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_print_exo(int nb, char *name, int size)
{
	int i;

	i = 0;
	ft_putchar('\n');
	while (i < size)
	{
		ft_putchar('-');
		i++;
	}
	ft_putstr("\n- EX");
	if (nb < 10)
		ft_putchar('0');
	ft_putnbr(nb);
	ft_putchar('	');
	ft_putstr(name);
	i = 0;
	while (i < size - 9 - ft_strlen(name))
	{
		ft_putchar(' ');
		i++;
	}	
	ft_putstr("-\n");
	i = 0;
	while (i < size)
	{
		ft_putchar('-');
		i++;
	}
	ft_putstr("\n");
}

/*----------------------------------------------------------------------------*/

int	main(int argc, char **argv)
{
	int 	header_size;
	header_size = 80;	

	ft_print_exo(0, "ft_split_whitespaces", header_size);
	ft_putstr("ft_split_whitespaces is parsing...\n");

	ft_print_exo(1, "ft.h", header_size);

	ft_print_exo(2, "ft_boolean.h", header_size);
	
	ft_print_exo(3, "ft_abs.h", header_size);
	ft_putnbr(ABS(-42));
	ft_putstr("\n----------\n");
	ft_putnbr(ABS(42));

	ft_print_exo(4, "ft_point.h", header_size);
	
	ft_print_exo(5, "ft_param_to_tab", header_size);
	
	ft_putstr("ft_stock_tab(); is parsing...\n");
	t_stock_par *tab_par;
	tab_par = ft_param_to_tab(argc, argv);
	ft_putstr("ft_stock_tab(); is parsed...\n");

	ft_print_exo(6, "ft_show_tab", header_size);
	ft_show_tab(tab_par);
	return(0);
}

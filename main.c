/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:30:28 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/20 13:26:23 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libft.h"

//-----------------------------------------------------------------------------
//	C141

static	void	c141_hr(char c, int len)
{
	while (len--)
		ft_putchar(c);
	ft_putchar('\n');
}

static	void	c141_hr_padded_str(char *str, char c, int len)
{
	ft_putchar(c);
	ft_putchar(' ');
	ft_putstr(str);
	while ((len--) - (ft_strlen(str) + 3))	
		ft_putchar(' ');
	ft_putchar(c);
	ft_putchar('\n');
}

static	void	c141_hr_banner(char *name, char motif, int len)
{
	ft_putchar('\n');
	c141_hr(motif, len);
	c141_hr_padded_str(name, motif, len);
	c141_hr(motif, len);
}

static	void	c141_hr_banner_project(char *name, char motif, int len)
{
	c141_hr(motif, len);
	c141_hr_padded_str(name, motif, len);
	c141_hr(motif, len);
}

//	C141
//-----------------------------------------------------------------------------

static	void	ft_list_print(t_list *list)
{
	int i;
	int j;
	int size;

	i = 0;
	while (list->next)
	{
		j = 0;
		if (i != 0)
		{
			ft_putstr(" ");
			while (j < i-1)
			{
				ft_putstr("    ");
				j++;
			}
			ft_putstr("|->[");
		}	
		else
			ft_putstr("[");
		ft_putnbr(i);	
		ft_putstr("]->");	
		ft_putstr((char*)list->content);
		ft_putchar('\n');
		list = list->next;
		i++;
	}
	j = 0;
	while (j < i-1)
	{
		ft_putstr("    ");
		j++;
	}
	ft_putstr(" |->[");
	ft_putnbr(i);
	ft_putstr("]->");	
	ft_putstr((char*)list->content);
	ft_putchar('\n');
}


static	t_list *fistoune(t_list *elem)
{
	int i;

	i = 0;
	while ((((char*)elem->content)[i]))
	{
		(((char*)elem->content)[i]) = ft_toupper((int)(((char*)elem->content)[i]));
		i++;
	}
	return (elem);	
}

static	void	tata(void *s, size_t n)
{
	while (n--)
		((char*)s)[n] = 0;
	free (s);
}

static	void	toto(char *c)
{
	//	*c = '-';
}

int		main(void)
{
	char	*str;
	char	*str2;
	char	*str_ptr;
	char	*str_Hello_world = "Hello world !";
	char	*str_numered = "0123456789";
	char	*str_Hello = "Hello";
	char	*str_world = " world !";
	char	str_empty[] = "             ";
	int		i;
	int		c;
	void	*mem;

	str = (char*)malloc(sizeof(*str) * (20));
	c141_hr_banner_project("LIBFT", '=', 80);

	//--------------PART I

	c141_hr_banner("void *ft_memset(void *b, int c, size_t len);", '=', 80);
	str = (char*)malloc(sizeof(*str) * (20));
	ft_memset(str, '\0', 20);
	ft_memset(str, 'A', 15);
	ft_putstr(str);

	c141_hr_banner("void *ft_bzero(void *s, size_t n);", '=', 80);
	ft_bzero((str + 5), 1);
	ft_putstr(str);
	ft_putstr("-");
	ft_putstr(str + 6);

	c141_hr_banner("void *ft_memcpy(void *dst, const void *src, size_t n);", '=', 80);
	str2 = (char*)malloc(sizeof(*str) * (20));
	ft_memset(str2, '\0', 20);
	ft_putstr(ft_memcpy(str2, str, 3));

	c141_hr_banner("void *ft_memcpy(void *dst, const void *src, size_t n);", '=', 80);
	str2 = (char*)malloc(sizeof(*str) * (20));
	ft_memset(str2, '\0', 20);
	ft_putstr(ft_memcpy(str2, str, 3));

	c141_hr_banner("void *ft_memccpy(void *dst, const void *src, int c, size_t n);", '=', 80);
	str2 = (char*)malloc(sizeof(*str) * (20));
	ft_memset(str, '\0', 20);
	ft_memset(str, '_', 19);
	ft_strcpy(str2, str_Hello_world);
	if(ft_memccpy(str, str2, 'w', 10))
		ft_putstr(str);
	ft_putstr("\n");
	ft_putstr(ft_memccpy(str, str2, 'w', 10));

	c141_hr_banner("void *ft_memmove(void *dst, const void *src, int c, size_t n);", '=', 80);

	str2 = (char*)malloc(sizeof(*str) * (20));
	ft_memset(str2, '\0', 20);
	ft_memcpy(str2, str_numered, 13);
	ft_putendl(str2);
	ft_putendl(ft_memmove(str2+2, str2, 3));

	c141_hr_banner("void *memchr(const void *s, int c, size_t n);", '=', 80);
	str = ft_memchr(str_Hello_world, 'w', 50);
	if (str)
		ft_putendl(str);

	if (ft_memchr("abcdef", 999, 6) == memchr("abcdef", 999, 6))
	{
		ft_putstr("OK\n");
		ft_putstr(ft_memchr("abcdef", 999, 6));
	}

	if (ft_memchr("abcdef", 'a', 7) == memchr("abcdef", 'a', 7))
	{
		ft_putstr("OK\n");
		ft_putstr(ft_memchr("abcdef", 0, 2));
		if (!ft_memchr("123456", 0, 7))
			ft_putendl("NULL");
	}


	str = ft_memchr("bonjourno", 'n', 2);
	if (!str)
		ft_putstr("OK");
	else
		ft_putstr("NON");

	c141_hr_banner("int	ft_memcmp(const void *s1, const void *s2, size_t n);", '=', 80);
	ft_putnbr(ft_memcmp("AAA", "AAB", 2));
	ft_putchar('\n');
	ft_putnbr(ft_memcmp("AAA", "AAB", 3));
	ft_putchar('\n');
	ft_putnbr(ft_memcmp("AA", "AAA", 3));
	ft_putchar('\n');
	ft_putnbr(ft_memcmp("AAB", "AAA", 3));
	ft_putchar('\n');
	ft_putnbr(ft_memcmp("AAA", "AAA", 10));

	c141_hr_banner("int ft_strlen(char *str);", '=', 80);
	ft_putstr("The length of the string \"Hello world !\" is : ");
	ft_putnbr(ft_strlen("Hello world !"));

	c141_hr_banner("char *strdup(const char *s1);", '=', 80);
	str_ptr = ft_strdup(str_Hello_world);
	ft_putstr(str_ptr);

	c141_hr_banner("char *strcpy(const char *s1);", '=', 80);
	str = (char*)malloc(sizeof(*str) * (20));
	ft_putstr(ft_strcpy(str, str_Hello_world));

	c141_hr_banner("char *strncpy(const char *s1, size_t len);", '=', 80);
	ft_putstr(ft_strncpy(str_empty, str_Hello_world, 5));

	c141_hr_banner("char *strcat(char *s1, const char *s2);", '=', 80);
	str = (char*)malloc(sizeof(*str) * (20));
	ft_strcpy(str, str_Hello);
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr(ft_strcat(str, str_world));
	ft_putchar('\n');

	c141_hr_banner("char *strncat(char *s1, const char *s2, size_t size);", '=', 80);
	str = (char*)malloc(sizeof(*str) * (20));
	ft_strcpy(str, str_Hello);
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr(ft_strncat(str, str_world, 4));
	ft_putchar('\n');

	c141_hr_banner("char *strlcat(char *s1, const char *s2, const char *s2, size_t size);", '=', 80);
	i = -4;

	while (i < 20)
	{
		str = (char*)malloc(sizeof(*str) * (20));
		ft_putnbr(i);
		ft_putchar('\t');
		ft_strcpy(str, str_Hello);
		ft_putnbr(ft_strlcat(str, str_world, i));
		ft_putchar('\t');
		ft_putstr(str);
		ft_putchar('\n');

		str = (char*)malloc(sizeof(*str) * (20));
		ft_putnbr(i);
		ft_putchar('\t');
		ft_strcpy(str, str_Hello);
		ft_putnbr(strlcat(str, str_world, i));
		ft_putchar('\t');
		ft_putstr(str);
		ft_putchar('\n');
		ft_putchar('\n');
		i++;
	}

	char    *dest;
	int     arg;
	dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);

	memset(dest, 'r', 15);
	ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);


	c141_hr_banner("char *strchr(cont char *s1, int c);", '=', 80);
	str = (char*)malloc(sizeof(*str) * (20));
	ft_strcpy(str, str_Hello_world);
	ft_putstr(ft_strchr(str, 'w'));

	c141_hr_banner("char *strrchr(cont char *s1, int c);", '=', 80);
	str = (char*)malloc(sizeof(*str) * (20));
	ft_strcpy(str, str_Hello_world);
	ft_putstr(ft_strrchr(str, 'l'));

	c141_hr_banner("char *ft_strstr(const char *haystack, const char *needle);", '=', 80);
	str = ft_strstr(str_Hello_world, "w");
	if (str)
		ft_putstr(str);

	c141_hr_banner("char *ft_strnstr(const char *haystack, const char *needle, size_t len);", '=', 80);
	str = ft_strnstr(str_Hello_world, "ll", 4);
	if (str)
		ft_putstr(str);

	c141_hr_banner("int ft_strcmp(const char s1, const char s2);", '=', 80);
	ft_putnbr(ft_strcmp("AAA", "AAB"));
	ft_putchar('\n');	
	ft_putnbr(ft_strcmp("AAB", "AAA"));
	ft_putchar('\n');	
	ft_putnbr(ft_strcmp("AAA", "AAA"));
	ft_putchar('\n');	
	ft_putnbr(ft_strcmp("AA", "AAA"));

	c141_hr_banner("int ft_strncmp(const char s1, const char s2, size_t n);", '=', 80);
	ft_putnbr(ft_strncmp("AAA", "AAB", 3));
	ft_putchar('\n');	
	ft_putnbr(ft_strncmp("AAB", "AAA", 2));
	ft_putchar('\n');	
	ft_putnbr(ft_strncmp("AAA", "AAA", 100));
	ft_putchar('\n');	
	ft_putnbr(ft_strncmp("AA", "AAA", 3));

	c141_hr_banner("int ft_atoi(const char *str);", '=', 80);
	ft_putnbr(ft_atoi("42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("0"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-2147483648"));
	ft_putchar('\n');

	c141_hr_banner("int ft_isalpha(int c);", '=', 80);
	i = 0;
	c = 0;
	ft_putstr("\n\t");
	while (i < 128)
	{	
		if (ft_isalpha(i))
		{
			if (i < 100)
				ft_putchar(' ');
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar(i);
			c++;
			if (c % 8)
				ft_putchar('\t');
			else
				ft_putstr("\n\t");
		}
		i++;
	}
	ft_putstr("\n");

	c141_hr_banner("int ft_isdigit(int c);", '=', 80);
	i = 0;
	c = 0;
	ft_putstr("\n\t");
	while (i < 128)
	{	
		if (ft_isdigit(i))
		{
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar(i);
			c++;
			if (c % 8)
				ft_putchar('\t');
			else
				ft_putstr("\n\t");
		}
		i++;
	}
	ft_putstr("\n");

	c141_hr_banner("int ft_isalnum(int c);", '=', 80);
	i = 0;
	c = 0;
	ft_putstr("\n\t");
	while (i < 128)
	{	
		if (ft_isalnum(i))
		{
			if (i < 100)
				ft_putchar(' ');
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar(i);
			c++;
			if (c % 8)
				ft_putchar('\t');
			else
				ft_putstr("\n\t");
		}
		i++;
	}
	ft_putstr("\n");

	c141_hr_banner("int ft_isascii(int c);", '=', 80);
	i = -256;
	c = 0;
	ft_putstr("\n\t");
	while (i < 256)
	{	
		if (ft_isascii(i))
		{
			if (i < 100)
				ft_putchar(' ');
			ft_putnbr(i);
			ft_putchar(' ');
			if (i < 33 || i == 127)
				ft_putstr(" ");
			else
				ft_putchar(i);
			c++;
			if (c % 8)
				ft_putchar('\t');
			else
				ft_putstr("\n\t");
		}
		i++;
	}
	ft_putstr("\n");

	c141_hr_banner("int ft_isprint(int c);", '=', 80);
	i = 0;
	c = 0;
	ft_putstr("\n\t");
	while (i < 128)
	{
		if (ft_isprint(i))
		{
			if (i < 100)
				ft_putchar(' ');
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar(i);
			c++;
			if (c % 8)
				ft_putchar('\t');
			else
				ft_putstr("\n\t");
		}
		i++;
	}
	ft_putstr("\n");

	c141_hr_banner("int ft_toupper(int c);", '=', 80);
	i = 0;
	c = 0;
	ft_putstr("\n\t");
	while (i < 128)
	{
		if (i != ft_toupper(i))
		{
			if (i < 100)
				ft_putchar(' ');
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar(ft_toupper(i));
			c++;
			if (c % 8)
				ft_putchar('\t');
			else
				ft_putstr("\n\t");
		}
		i++;
	}
	ft_putstr("\n");

	c141_hr_banner("int ft_tolower(int c);", '=', 80);
	i = 0;
	c = 0;
	ft_putstr("\n\t");
	while (i < 128)
	{
		if (i != ft_tolower(i))
		{
			if (i < 100)
				ft_putchar(' ');
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar(ft_tolower(i));
			c++;
			if (c % 8)
				ft_putchar('\t');
			else
				ft_putstr("\n\t");
		}
		i++;
	}
	ft_putstr("\n");

	//--------------PART II

	c141_hr_banner("void *ft_memalloc(size_t size);", '=', 80);
	mem = ft_memalloc(50);

	c141_hr_banner("void ft_memdel(void **ap);", '=', 80);
	ft_memdel(&mem);

	c141_hr_banner("char *ft_strnew(size_t size);", '=', 80);
	str = ft_strnew(10);

	c141_hr_banner("char *ft_strnew(size_t size);", '=', 80);
	ft_strdel(&str);

	c141_hr_banner("void ft_strclr(char *s);", '=', 80);
	str = (char*)malloc(sizeof(*str) * (20));
	ft_strclr(str);

	c141_hr_banner("void ft_striter(char *s, void (*f)(char*));", '=', 80);
	str = ft_strnew(10);
	str[0] = 'a';
	str[1] = ' ';
	str[2] = 'b';
	str[3] = 'a';
	ft_striter(str, &toto);
	ft_putstr(str);	

	c141_hr_banner("void ft_striteri(char *s, void (*f)(unsigned int, char*));", '=', 80);
	str = ft_strnew(10);
	str[0] = 'a';
	str[1] = ' ';
	str[2] = 'b';
	str[3] = 'a';
	ft_putstr(str);	

	c141_hr_banner("char *ft_strmap(char const *s, char (*f)(char));", '=', 80);

	c141_hr_banner("char *ft_strmapi(char const *s, char (*f)(unsigned int, char));", '=', 80);

	c141_hr_banner("int ft_strequ(char const *s1, char const *s2);", '=', 80);
	ft_putnbr(ft_strequ(str_Hello, str_world));
	ft_putnbr(ft_strequ(str_Hello, str_Hello));

	c141_hr_banner("int ft_strnequ(char const *s1, char const *s2);", '=', 80);
	ft_putnbr(ft_strnequ("AAA", "AAA", 10));
	ft_putnbr(ft_strnequ("AAB", "AAA", 3));
	ft_putnbr(ft_strnequ("AAB", "AAA", 2));
	ft_putnbr(ft_strnequ("AAA", "A", 2));

	c141_hr_banner("char *ft_strsub(char const *s, unsigned int start, size_t len);", '=', 80);
	ft_putstr(ft_strsub(str_Hello_world, 3, 6));

	c141_hr_banner("char *ft_strjoin(char const *s1, char const *s2);", '=', 80);
	ft_putstr(ft_strjoin(str_Hello, str_world));

	c141_hr_banner("char *ft_strtrim(char const *s1, char const *s2);", '=', 80);
/*
	ft_putendl(ft_strtrim("Hello !\0"));

	ft_putendl(ft_strtrim("H\0"));

	ft_putendl(ft_strtrim("\0"));

	ft_putendl(ft_strtrim("      Hello !      \0"));
*/
	ft_putendl(ft_strtrim("   \0"));


	/*
	c141_hr_banner("char **ft_strsplit(char const *s, char c);", '=', 80);
	char **tab;

	tab = ft_strsplit("1 A 23 BC 456 DEF", ' ');
	while (*tab)
	{
		ft_putstr(*tab++);
		ft_putchar('\n');
	}
	ft_putendl("\n");
	tab = ft_strsplit("  ", ' ');
	ft_putchar('|');
	while (*tab)
	{
		ft_putstr(*tab++);
		ft_putchar('\n');
	}
	ft_putchar('|');

	c141_hr_banner("char *ft_itoa(int n);", '=', 80);
	ft_putstr(ft_itoa(-2147483648));
	ft_putchar('\n');
	ft_putstr(ft_itoa(-2147483645));
	ft_putchar('\n');
	ft_putstr(ft_itoa(-141));
	ft_putchar('\n');
	ft_putstr(ft_itoa(-42));
	ft_putchar('\n');
	ft_putstr(ft_itoa(-1));
	ft_putchar('\n');
	ft_putstr(ft_itoa(-0));
	ft_putchar('\n');
	ft_putstr(ft_itoa(0));
	ft_putchar('\n');
	ft_putstr(ft_itoa(1));
	ft_putchar('\n');
	ft_putstr(ft_itoa(42));
	ft_putchar('\n');
	ft_putstr(ft_itoa(141));
	ft_putchar('\n');
	ft_putstr(ft_itoa(2147483647));

	c141_hr_banner("void ft_putchar(char c);", '=', 80);
	ft_putchar('A');

	c141_hr_banner("void ft_putstr(char const *s);", '=', 80);
	ft_putstr("Hello world !");

	c141_hr_banner("void ft_putendl(char const *s);", '=', 80);
	ft_putendl("Hello !");
	ft_putendl("Hello !");
	ft_putendl("Hello !");
	ft_putendl("Hello !");

	c141_hr_banner("void ft_putnbr(int n);", '=', 80);
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);

	c141_hr_banner("void ft_putchar_fd(char c, int fd);", '=', 80);
	ft_putchar_fd('a', 1);

	c141_hr_banner("void ft_putstr_fd(char const *s, int fd);", '=', 80);
	ft_putstr_fd("Hello", 1);

	c141_hr_banner("void ft_putendl_fd(char const *s, int fd);", '=', 80);
	ft_putendl_fd("Hello !", 1);
	ft_putendl_fd("Hello !", 1);
	ft_putendl_fd("Hello !", 1);

	c141_hr_banner("void ft_putnbr_fd(int n, int fd);", '=', 80);
	ft_putnbr_fd(42, 1);
	ft_putchar('\n');
	ft_putnbr_fd(-2147483648, 1);

	int mini = (-2147483647 -1);
	ft_putchar('\n');
	ft_putnbr_fd(mini, 1);

	//--------------PART III

	c141_hr_banner("t_list *ft_lstnew(void const *content, size_t content_size);", '=', 80);
	t_list *list;
	t_list *list_cpy;
	t_list *link;

	list = ft_lstnew(ft_strdup("Hello1\0"), 7);
	list->next = ft_lstnew(ft_strdup("Hello2\0"), 7);
	list->next->next = ft_lstnew(ft_strdup("Hello3\0"), 7);
	list_cpy = list;
	ft_list_print(list_cpy);

	c141_hr_banner("void ft_lstdelone(t_list **alst, void (*del)(void*, size_t));", '=', 80);

	list_cpy = list;
	ft_lstdelone(&list->next->next, &tata);
	ft_list_print(list_cpy);

	c141_hr_banner("void ft_lstdel(t_list **alst, void (*del)(void *, size_t));", '=', 80);
	list_cpy = list;
	link = list->next;

	void	*tititi;
	tititi = list->next->content;
	ft_lstdel(&list, &tata);

	c141_hr_banner("t_list *ft_lstnew(void const *content, size_t content_size);", '=', 80);
	list = ft_lstnew("!", 14);
	ft_lstadd(&list, ft_lstnew(" ", 14));
	ft_lstadd(&list, ft_lstnew("world", 14));
	ft_lstadd(&list, ft_lstnew(" ", 14));
	ft_lstadd(&list, ft_lstnew("Hello", 14));
	ft_list_print(list);

	c141_hr_banner("void ft_lstiter(t_list *lst, void (*f)(t_list *elem));", '=', 80);

	c141_hr_banner("t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));", '=', 80);
	list = ft_lstnew("!", 14);
	ft_lstadd(&list, ft_lstnew(" ", 14));
	ft_lstadd(&list, ft_lstnew("world", 14));
	ft_lstadd(&list, ft_lstnew(" ", 14));
	ft_lstadd(&list, ft_lstnew("Hello", 14));

	list_cpy = ft_lstmap(list, &fistoune);
	ft_list_print(list);
	ft_list_print(list_cpy);
	
	//--------------PART IV
	//
	c141_hr_banner("void ft_putnbr_base(int nbr, char *base);", '=', 80);
	ft_putnbr_base(255, "0123456789abcdef");

	c141_hr_banner("int ft_atoi_base(char *str, char *base);", '=', 80);
	ft_putnbr(ft_atoi_base("ff", "0123456789abcdef"));

	c141_hr_banner("int ft_factorial(int nb);", '=', 80);
	ft_putnbr(ft_factorial(3));

	c141_hr_banner("int ft_power(int nb, int power);", '=', 80);
	ft_putnbr(ft_power(5, 2));

	c141_hr_banner("int ft_sqrt(int nb);", '=', 80);
	ft_putnbr(ft_sqrt(9));
	*/
	return (0);
}

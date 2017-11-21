/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 20:23:12 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/18 00:05:57 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define BLUE    "\x1b[34m"
#define YELLOW  "\x1b[33m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int				ft_atoi(char *str);
int				ft_atoi_base(char *str, char *base);
void			ft_putnbr(int nb);
void			ft_putnbr_base(int nbr, char *base);
void			ft_putstr(char *str);
int				ft_str_is_alpha(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_printable(char *str);
int				ft_str_is_uppercase(char *str);
char			*ft_strcapitalize(char *str);
char			*ft_strcat(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strncat(char *dest, char *src, int nb);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strrev(char *str);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strupcase(char *str);
void			ft_swap(int *a, int *b);
void			ft_putchar(char c);
char			**ft_split_whitespaces(char *str);
void			ft_print_words_tables(char **tab);
void			ft_joe_print_exo(int nb, char *name, int size);
void			ft_joe_print_day(int nb, char *name, int size);

#endif

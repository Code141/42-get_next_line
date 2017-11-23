gcc -c src/ft_*.c &&
ar rc libft.a ft_*.o &&
rm ft_*.o &&
ranlib libft.a 

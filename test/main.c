//compilation: gcc main.c ../libft.a
int	main(void)
{
	char	alphabet[27];
	char	c = 97;
	int	i = 0;

	for (; c <= 122; c++)
		alphabet[i++] = c;
	alphabet[i] = '\0';
	// Using ft_putendl function from libC to print out string with a line return
	ft_putendl(alphabet);	
	return (0);
}

void	ft_putchar(char c);
void	top_lines(int x);
void	bottom_lines(int x);
void	mid_lines(int x);

void	colle(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		top_lines(x);
		while (i < y - 2)
		{
			mid_lines(x);
			i++;
		}
		if (y > 2)
			bottom_lines(x);
	}
}

void	top_lines(int x)
{
	int i;

	i = 0;
	ft_putchar('/');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 2)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	bottom_lines(int x)
{
	int i;

	i = 0;
	ft_putchar('\\');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 2)
		ft_putchar('/');
	ft_putchar('\n');
}

void	mid_lines(int x)
{
	int i;

	i = 0;
	ft_putchar('*');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 2)
		ft_putchar('*');
	ft_putchar('\n');
}

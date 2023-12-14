#include <unistd.h>

int cmp(char *av, char *av2)
{
	int i;

	i = 0;
	while (av[i] != 0 && av2[i] != 0)
	{
		if (av[i] == av2[i])
			i++;
		else
			return (av[i] - av2[i]);
	}
	return (av[i] - av2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	a;
	char *b;

	i = 1;
	j = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			a = cmp(av[i], av[j]);
			if (a < 0)
				{
					b = av[i];
					av[i] = av[j];
					av[j] = b;
				}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i] != 0)
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

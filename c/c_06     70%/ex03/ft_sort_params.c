/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:41:51 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/18 18:06:30 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_argv(int i, int j, char **str);
int		ft_strcmp(char *s1, char *s2);

void	print_argv(int i, int j, char **str)
{
	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (diff);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		if (ft_strcmp(argv[i], argv[j]) => 1)
		{
			aux = argv[j];
			argv[j] = argv[i];
			argv[i] = aux;
			i = 0;
		}
		i++;
	}
	print_argv(i, j, argv);
}

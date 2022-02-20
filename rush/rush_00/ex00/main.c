/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:11:25 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/06 15:28:46 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
int		pow_10(int exp);
int		array_to_int(char c[]);

int	pow_10(int exp)
{
	int	i;

	i = 1;
	while (exp > 0)
	{
	i = 10 * i;
	exp--;
	}
	return (i);
}

int	array_to_int(char c[])
{
	int	i;
	int	size;
	int	num;

	num = 0;
	size = 0;
	while (c[size])
		size++;
	i = size;
	while (i-- > 0)
		num = num + ((c[i] - 48) * (pow_10(size - i - 1)));
	return (num);
}

int	main(int argc, char *argv[])
{	
	int	x;
	int	y;

	if (argc != 3)
		return (0);
	x = array_to_int(argv[1]);
	y = array_to_int(argv[2]);
	rush(x, y);
	return (0);
}

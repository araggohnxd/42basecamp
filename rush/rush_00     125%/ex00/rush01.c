/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:56:29 by jrocha-s          #+#    #+#             */
/*   Updated: 2022/02/05 19:38:54 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);
void	ft_print(int x, char firstchar, char midchar, char lastchar);

void	ft_print(int x, char firstchar, char midchar, char lastchar)
{
	int	count_x;

	count_x = 1;
	while (count_x <= x)
	{
		if (count_x == 1)
			ft_putchar(firstchar);
		else if (count_x == x)
			ft_putchar(lastchar);
		else
			ft_putchar(midchar);
		count_x++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	count_y;

	count_y = 1;
	if (x > 0 && y > 0)
	{
		while (count_y <= y)
		{
			if (count_y == 1)
				ft_print(x, '/', '*', '\\');
			else if (count_y == y)
				ft_print(x, '\\', '*', '/');
			else
				ft_print(x, '*', ' ', '*');
			count_y++;
		}
	}
}

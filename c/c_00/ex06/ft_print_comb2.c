/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:59:22 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/04 02:32:24 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb3(int a, int b);

void	ft_print_comb3(int a, int b)
{
	char	num[5];

	num[0] = a / 10 + 48;
	num[1] = a % 10 + 48;
	num[2] = ' ';
	num[3] = b / 10 + 48;
	num[4] = b % 10 + 48;
	write(1, num, 5);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				ft_print_comb3(a, b);
				if (!(a == 98 && b == 99))
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		a++;
	}
}

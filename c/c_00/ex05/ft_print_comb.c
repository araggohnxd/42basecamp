/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:26:20 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/03 21:08:07 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	while (num[0] <= '9')
	{
		while (num[1] <= '9')
		{
			while (num[2] <= '9')
			{
				write(1, &num[0], 1);
				write(1, &num[1], 1);
				write(1, &num[2], 1);
				num[2]++;
				if (num[0] < '7')
					write(1, ", ", 2);
			}
			num[1]++;
			num[2] = num[1] + 1;
		}
		num[0]++;
		num[1] = num[0] + 1;
		num[2] = num[1] + 1;
	}
}

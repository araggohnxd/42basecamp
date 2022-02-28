/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:08:59 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/24 22:37:18 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = 0;
	if ((max - min) < 1)
		return (range);
	i = 0;
	range = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
		range[i++] = min++;
	return (range);
}

// #include <stdio.h>

// int	main()
// {
// 	int	*c;
// 	int	i = 0;

// 	c = ft_range(101, 202);
// 	while (c[i])
// 		printf("%d ", c[i++]);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:17:04 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/09 17:07:41 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	comp;
	int	aux;

	count = 0;
	comp = 1;
	while (count < size)
	{
		while (comp < size)
		{
			if (tab[count] > tab[comp])
			{
				aux = tab[comp];
				tab[comp] = tab[count];
				tab[count] = aux;
			}
			comp++;
		}
		count++;
		comp = count + 1;
	}
}

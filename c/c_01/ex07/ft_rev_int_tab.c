/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:42:32 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/09 17:18:59 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	aux_int;

	size--;
	index = 0;
	while (index < size)
	{
		aux_int = tab[index];
		tab[index] = tab[size];
		tab[size] = aux_int;
		index++;
		size--;
	}
}

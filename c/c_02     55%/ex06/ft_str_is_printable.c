/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:31:41 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/13 17:21:56 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	unsigned int	size;
	unsigned int	i;

	size = 0;
	i = 0;
	while (str[size])
		size++;
	if (size == 0)
		return (1);
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		else
			i++;
	}
	return (1);
}

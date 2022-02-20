/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:31:41 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/13 17:58:20 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	unsigned int	size;
	unsigned int	i;
	int				c;

	size = 0;
	i = 0;
	while (str[size])
		size++;
	if (size == 0)
		return (1);
	while (str[i])
	{
		c = str[i];
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
			return (0);
		else
			i++;
	}
	return (1);
}

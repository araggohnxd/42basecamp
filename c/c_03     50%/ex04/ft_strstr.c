/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:29:16 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/15 18:31:55 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlen(char *to_find);

unsigned int	ft_strlen(char *to_find)
{
	unsigned int	i;

	i = 0;
	while (to_find[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	find_len;

	i = 0;
	find_len = ft_strlen(to_find);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i])
			j++;
		if (j == find_len)
			break ;
		i++;
	}
	if (j != find_len)
		return (0);
	return (str += i);
}

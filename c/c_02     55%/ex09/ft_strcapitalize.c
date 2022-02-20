/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:36:40 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/15 20:08:12 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		is_it_low(char *str);
int		is_it_up_or_num(char *str);
int		is_it_just_up(char *str);

int	is_it_just_up(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	else
		return (0);
}

int	is_it_up_or_num(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	else if (*str >= '0' && *str <= '9')
		return (1);
	else if (is_it_low(str))
		return (1);
	else
		return (0);
}

int	is_it_low(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'A' && str[0] <= 'Z')
		i++;
	while (str[i])
	{
		if (is_it_low(&str[i]))
		{
			if (!(is_it_up_or_num(&str[i - 1])))
				str[i] -= 32;
		}
		else if (is_it_just_up(&str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:44:56 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/17 15:52:53 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		is_base_invalid(char *base);
int		ft_strlen(char *str);
int		check_duplicates(char *str, int size);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_duplicates(char *str, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str++)
		size++;
	return (size);
}

int	is_base_invalid(char *base)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (1);
		i++;
	}
	size = ft_strlen(base);
	if (size < 2)
		return (1);
	if (check_duplicates(base, size))
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		base_size;

	if (!(is_base_invalid(base)))
	{
		num = nbr;
		base_size = ft_strlen(base);
		if (num < 0)
		{
			ft_putchar('-');
			num *= -1;
		}
		if (num >= 0)
		{
			if (num >= base_size)
				ft_putnbr_base(num / base_size, base);
			ft_putchar(base[num % base_size]);
		}
	}
}

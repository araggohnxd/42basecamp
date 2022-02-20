/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:24:04 by maolivei          #+#    #+#             */
/*   Updated: 2022/02/17 15:35:00 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base);
int	is_base_invalid(char *base);
int	check_duplicates(char *str, int size);
int	base_conversion(char *str, int start, char *base, int base_size);
int	check_num(char num, char *base, int base_size);

int	check_num(char num, char *base, int base_size)
{
	int	pos;

	pos = 0;
	while (pos < base_size)
	{
		if (num == base[pos])
			return (pos);
		pos++;
	}
	return (-1);
}

int	base_conversion(char *str, int start, char *base, int base_size)
{
	unsigned int	i;
	long			num;

	i = 0;
	num = 0;
	while (check_num(str[start + i], base, base_size) >= 0)
	{
		num = ((num * base_size) + check_num(str[start + i], base, base_size));
		i++;
	}
	return (num);
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

int	is_base_invalid(char *base)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (1);
		i++;
	}
	while (base[size])
		size++;
	if (size < 2)
		return (1);
	if (check_duplicates(base, size))
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	unsigned int	result;
	unsigned int	min_count;
	unsigned int	base_size;

	if (is_base_invalid(base))
		return (0);
	i = 0;
	result = 0;
	min_count = 0;
	base_size = 0;
	while (base[base_size])
		base_size++;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			min_count++;
		i++;
	}
	result = base_conversion(str, i, base, base_size);
	if (min_count % 2 == 1)
		return (-result);
	return (result);
}

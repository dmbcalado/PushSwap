/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoli.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:23:22 by dmendonc          #+#    #+#             */
/*   Updated: 2022/03/08 12:23:22 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	position(t_data *data, int i)
{
	int	j;
	int	posit;

	j = 0;
	posit = data->argc - 1;
	while (j < data->argc - 1)
	{
		if (data->stack_a[i] < data->stack_a[j])
			posit--;
		j++;
	}
	return (posit);
}

void	check_atoli(long int number)
{
	if (number < MIN_INT || number > MAX_INT)
	{
		write(2, "Error\n", 6);
		exit(2);
	}
}

int	ft_atoli(char *str)
{
	int			i;
	int			menos;
	long int	number;

	i = 0;
	menos = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		menos = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10 + menos * (str[i] - 48);
		i++;
	}
	check_atoli(number);
	return ((int)number);
}

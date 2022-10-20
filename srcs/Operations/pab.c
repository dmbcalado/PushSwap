/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:23:58 by dmendonc          #+#    #+#             */
/*   Updated: 2022/03/08 12:23:58 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pa(t_data *data)
{
	int	i;
	int	nbr;

	i = -1;
	alloc_steplist(data);
	data->step_list[data->steps - 1] = PA;
	nbr = data->pos_b[0];
	while (++i < data->argc - 2)
	{
		if (data->pos_b[i] != 0)
			data->pos_b[i] = data->pos_b[i + 1];
		else
			break ;
	}
	data->pos_b[i] = 0;
	i = data->argc - 1;
	while (--i > 0)
	{
		if (data->pos_a[i - 1] != 0)
			data->pos_a[i] = data->pos_a[i - 1];
		else
			continue ;
	}
	data->pos_a[0] = nbr;
	return (1);
}

int	pb(t_data *data)
{
	int	i;
	int	nbr;

	i = -1;
	alloc_steplist(data);
	data->step_list[data->steps - 1] = PB;
	nbr = data->pos_a[0];
	while (++i < data->argc - 2)
	{
		if (data->pos_a[i] != 0)
			data->pos_a[i] = data->pos_a[i + 1];
		else
			break ;
	}
	data->pos_a[i] = 0;
	i = data->argc - 1;
	while (--i > 0)
	{
		if (data->pos_b[i - 1] != 0)
			data->pos_b[i] = data->pos_b[i - 1];
		else
			continue ;
	}
	data->pos_b[0] = nbr;
	return (1);
}

int	real_pb(t_data *data)
{
	int	i;
	int	nbr;

	i = -1;
	nbr = data->stack_a[0];
	write(1, "pb\n", 3);
	while (++i < data->argc - 2)
	{
		if (data->stack_a[i] != -911818475)
			data->stack_a[i] = data->stack_a[i + 1];
		else
			break ;
	}
	data->stack_a[i] = -911818475;
	i = data->argc - 1;
	while (--i > 0)
	{
		if (data->stack_b[i - 1] != -911818475)
			data->stack_b[i] = data->stack_b[i - 1];
		else
			continue ;
	}
	data->stack_b[0] = nbr;
	return (1);
}

int	real_pa(t_data *data)
{
	int	i;
	int	nbr;

	i = -1;
	write(1, "pa\n", 3);
	nbr = data->stack_b[0];
	while (++i < data->argc - 2)
	{
		if (data->stack_b[i] != -911818475)
			data->stack_b[i] = data->stack_b[i + 1];
		else
			break ;
	}
	data->stack_b[i] = -911818475;
	i = data->argc - 1;
	while (--i > 0)
	{
		if (data->stack_a[i - 1] != -911818475)
			data->stack_a[i] = data->stack_a[i - 1];
		else
			continue ;
	}
	data->stack_a[0] = nbr;
	return (1);
}

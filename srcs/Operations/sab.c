/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:51:39 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/19 18:34:47 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int sa(t_data *data)
{
	int	nbr;

	alloc_steplist(data);
	data->step_list[data->steps - 1] = 5;
	nbr = data->pos_a[0];
	if (data->pos_a[1] != 0)
	{
		data->pos_a[0] = data->pos_a[1];
		data->pos_a[1] = nbr;
	}
	return (1);
}

int sb(t_data *data)
{
	int	nbr;

	alloc_steplist(data);
	data->step_list[data->steps - 1] = 6;
	nbr = data->pos_b[0];
	if (data->pos_b[1] != 0)
	{
		data->pos_b[0] = data->pos_b[1];
		data->pos_b[1] = nbr;
	}
	return (1);
}

int real_sa(t_data *data)
{
	int	nbr;

	write(1, "sa\n", 3);
	nbr = data->stack_a[0]; 
	if (data->stack_a[1] != -911818475)
	{
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = nbr;
	}
	return (1);
}

int real_sb(t_data *data)
{
	int	nbr;

	write(1, "sb\n", 3);
	nbr = data->stack_b[0];
	if (data->stack_b[1] != -911818475)
	{
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = nbr;
	}
	return (1);
}

int ss(t_data *data)
{
	int	nbr_a;
	int	nbr_b;

	nbr_a = data->stack_a[0];
	nbr_b = data->stack_b[0];
	write(1, "ss\n", 3);
	if (data->stack_a[1] != -911818475)
	{
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = nbr_a;
	}
	if (data->stack_b[1] != -911818475)
	{
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = nbr_b;
	}
	return (1);
}
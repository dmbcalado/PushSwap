/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:24:11 by dmendonc          #+#    #+#             */
/*   Updated: 2022/03/08 12:24:11 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ra(t_data *data)
{
	int	i;
	int	nbr;

	i = -1;
	alloc_steplist(data);
	data->step_list[data->steps - 1] = RA;
	nbr = data->pos_a[0];
	while (data->pos_a[++i] != 0 &&  i < data->argc - 2)
	{
		if(data->pos_a[i + 1] != 0)
			data->pos_a[i] = data->pos_a[i + 1];
		else
			break ;
	}
	data->pos_a[i] = nbr;
	return (1);
}

int rb(t_data *data)
{
	int	i;
	int	nbr;

	alloc_steplist(data);
	data->step_list[data->steps - 1] = RB;
	nbr = data->pos_b[0];
	i = -1;
	while (data->pos_b[++i] != 0 &&  i < data->argc - 2)
	{
		if(data->pos_b[i + 1] != 0)
			data->pos_b[i] = data->pos_b[i + 1];
		else
			break ;
	}
	data->pos_b[i] = nbr;
	return (1);
}

int real_ra(t_data *data)
{
	int	i;
	int	nbr;

	i = -1;
	nbr = data->stack_a[0];
	while (data->stack_a[++i] != -911818475 &&  i < data->argc - 2)
	{
		if(data->stack_a[i + 1] != -911818475)
			data->stack_a[i] = data->stack_a[i + 1];
		else
			break ;
	}
	data->stack_a[i] = nbr;
	return (1);
}

int real_rb(t_data *data)
{
	int	i;
	int	nbr;

	i = -1;
	nbr = data->stack_b[0];
	while (data->stack_b[++i] != -911818475 &&  i < data->argc - 2)
	{
		if(data->stack_b[i + 1] != -911818475)
			data->stack_b[i] = data->stack_b[i + 1];
		else
			break ;
	}
	data->stack_b[i] = nbr;
	return (1);
}

int	rr(t_data *data)
{
	write(1, "rr\n", 3);
	real_ra(data);
	real_rb(data);
	return (1);
}
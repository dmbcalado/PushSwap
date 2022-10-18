/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:24:14 by dmendonc          #+#    #+#             */
/*   Updated: 2022/03/08 12:24:14 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int rra(t_data *data)
{
	int	i;
	int	nbr;

	i = -1;
	alloc_steplist(data);
	data->step_list[data->steps - 1] = RRA;
	i= data->argc - 1;
	while (--i > 0)
	{
		if (data->pos_a[i] != 0)
		{
			nbr = data->pos_a[i];
			break ;
		}
	}
	i++;
	while (--i > 0)
	{
		if(data->pos_a[i - 1] != 0)
			data->pos_a[i] = data->pos_a[i - 1];
		else
			continue ;
	}
	data->pos_a[0] = nbr;
	return (1);
}

int rrb(t_data *data)
{
	int	i;
	int	nbr;

	alloc_steplist(data);
	data->step_list[data->steps - 1] = RRB;
	i= data->argc - 1;
	while (--i > 0)
	{
		if (data->pos_b[i] != 0)
		{
			nbr = data->pos_b[i];
			break ;
		}
	}
	i++;
	while (--i > 0)
	{
		if(data->pos_b[i - 1] != 0)
			data->pos_b[i]= data->pos_b[i - 1];
		else
			continue ;
	}
	data->pos_b[0] = nbr;
	return (1);
}

int real_rra(t_data *data)
{
	int	i;
	int	nbr;

	i= data->argc - 1;
	while (--i > 0)
	{
		if (data->stack_a[i] != -911818475)
		{
			nbr = data->stack_a[i];
			break ;
		}
	}
	i++;
	while (--i > 0)
	{
		if(data->stack_a[i - 1] != -911818475)
			data->stack_a[i] = data->stack_a[i - 1];
		else
			continue ;
	}
	data->stack_a[0] = nbr;
	return (1);
}

int real_rrb(t_data *data)
{
	int	i;
	int	nbr;

	i= data->argc - 1;
	while (--i > 0)
	{
		if (data->stack_b[i] != -911818475)
		{
			nbr = data->stack_b[i];
			break ;
		}
	}
	i++;
	while (--i > 0)
	{
		if(data->stack_b[i - 1] != -911818475)
			data->stack_b[i] = data->stack_b[i - 1];
		else
			continue ;
	}
	data->stack_b[0] = nbr;
	return (1);
}

int	rrr(t_data *data)
{
	write(1, "rrr\n", 3);
	real_rra(data);
	real_rrb(data);
	return (1);
}
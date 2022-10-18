/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_operations_one.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:00:00 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/18 21:34:41 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	run_operations(t_data *data)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (i < data->steps)
	{
		cont++;
		if (data->step_list[i] == PB)
		{
			i++;
			real_pb(data);
		}
		else if (data->step_list[i] == PA)
		{
			i++;	
			real_pa(data);
		}
		else
			i = run_operations_two(data, i);
	}
}

int	run_operations_two(t_data *data, int i)
{
	if (data->step_list[i] == RA)
	{
		if (i + 1 < data->steps && data->step_list[i + 1] == RB)
		{
			i += 2;
			rr(data);
		}
		else if (i + 2 < data->steps && data->step_list[i + 1] == SB && data->step_list[i + 2] == RB)
		{
			real_sb(data);
			rr(data);
			i += 3;
		}
		else
		{
			write(1, "ra\n", 3);
			real_ra(data);
			i++;
		}
	}
	else
		i = run_operations_three(data, i);
	return (i);
}

int	run_operations_three(t_data *data, int i)
{
	if (data->step_list[i] == RB)
	{
		if (i + 1 < data->steps && data->step_list[i + 1] == RA)
		{
			rr(data);
			i += 2;
		}
		else if (i + 2 < data->steps && data->step_list[i + 1] == SA && data->step_list[i + 2] == RA)
		{
			real_sa(data);
			rr(data);
			i += 3;
		}
		else
		{
			write(1, "rb\n", 3);
			real_rb(data);
			i++;
		}
	}
	else
		i = run_operations_four(data, i);
	return (i);
}

int	run_operations_four(t_data *data, int i)
{
	if (data->step_list[i] == RRA)
	{
		if (i + 1 < data->steps && data->step_list[i + 1] == RRB)
		{
			rrr(data);
			i += 2;
		}
		else if (i + 2 < data->steps && data->step_list[i + 1] == SB && data->step_list[i + 2] == RRB)
		{
			real_sb(data);
			rrr(data);
			i += 3;
		}
		else
		{
			write(1, "rra\n", 4);
			real_rra(data);
			i++;
		}
	}
	else
		i = run_operations_five(data, i);
	return (i);
}

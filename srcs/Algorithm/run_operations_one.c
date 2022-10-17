/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_operations_one.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:00:00 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/18 00:44:14 by dmendonc         ###   ########.fr       */
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
		if (data->step_list[i] == -2)
		{
			i++;
			real_pb(data);
		}
		else if (data->step_list[i] == -1)
		{
			i++;	
			real_pa(data);
		}
		else
			i = run_operations_two(data, i);
	}
	printf("\n operations: %d\n", cont);
}

int	run_operations_two(t_data *data, int i)
{
	if (data->step_list[i] == 1)
	{
		if (i + 1 < data->steps && data->step_list[i + 1] == 2)
		{
			i += 2;
			rr(data);
		}
		else if (i + 2 < data->steps && data->step_list[i + 1] == 6 && data->step_list[i + 2] == 2)
		{
			real_sb(data);
			rr(data);
			i += 3;
		}
		else
		{
			//write(1, "ra\n", 3);
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
	if (data->step_list[i] == 2)
	{
		if (i + 1 < data->steps && data->step_list[i + 1] == 1)
		{
			rr(data);
			i += 2;
		}
		else if (i + 2 < data->steps && data->step_list[i + 1] == 5 && data->step_list[i + 2] == 1)
		{
			real_sa(data);
			rr(data);
			i += 3;
		}
		else
		{
			//write(1, "rb\n", 3);
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
	if (data->step_list[i] == 3)
	{
		if (i + 1 < data->steps && data->step_list[i + 1] == 4)
		{
			rrr(data);
			i += 2;
		}
		else
		{
			//write(1, "rra\n", 4);
			real_rra(data);
			i++;
		}
	}
	else
		i = run_operations_five(data, i);
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_operations_two.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:59:42 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/20 02:08:10 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	run_operations_five(t_data *data, int i)
{
	if (data->step_list[i] == RRB)
	{
		if (i + 1 < data->steps && data->step_list[i + 1] == RRA)
		{
			i += 2;
			rrr(data);
		}
		else if (i + 2 < data->steps && data->step_list[i + 1] == SA && \
		data->step_list[i + 2] == RRB)
		{
			real_sa(data);
			rrr(data);
			i += 3;
		}
		else
		{
			write(1, "rrb\n", 4);
			real_rrb(data);
			i++;
		}
	}
	else
		i = run_operations_six(data, i);
	return (i);
}

int	run_operations_six(t_data *data, int i)
{
	if (data->step_list[i] == 5)
	{
		real_sa(data);
		i++;
	}
	else if (data->step_list[i] == 6)
	{
		real_sb(data);
		i++;
	}
	return (i);
}

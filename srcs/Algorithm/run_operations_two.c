/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_operations_two.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:59:42 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/18 00:44:23 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	run_operations_five(t_data *data, int i)
{
	if (data->step_list[i] == 4)
	{
		if (i + 1 < data->steps && data->step_list[i + 1] == 3)
		{
			i += 2;
			rrr(data);
		}
		else
		{
			//write(1, "rrb\n", 4);
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
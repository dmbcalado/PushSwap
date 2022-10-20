/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:39:33 by ratinhosujo       #+#    #+#             */
/*   Updated: 2022/10/20 01:11:51 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	its_the_else(t_data *data)
{
	if (data->pos_a[0] <= data->outsiders_b)
	{
		pb(data);
		data->total_left--;
	}
	else if (data->pos_a[0] > data->argc - 1 - data->outsiders_t)
	{
		pb(data);
		data->total_left--;
	}
	else
		ra(data);
}

void	push_to_b(t_data *data)
{
	int	counter;
	int	limit;

	counter = 0;
	calculate_chunck_nmbrs(data);
	limit = calculate_limit(data);
	while (data->total_left > 0)
	{
		if (in_interest_chunks(data) == 1)
		{
			counter++;
			pb(data);
			data->total_left--;
		}
		else
			its_the_else(data);
		if (counter == limit)
		{
			data->m_bot--;
			data->m_top--;
			limit = calculate_limit(data);
			counter = 0;
		}
	}
}

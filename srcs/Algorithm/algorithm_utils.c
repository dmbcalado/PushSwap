/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:32:11 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/20 02:06:56 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	calculate_chunck_nmbrs(t_data *data)
{
	if (data->argc > 200)
	{
		data->chunck_size = 16;
		data->nbr_bchuncks = (data->bot_marg - 1) / 16;
		data->outsiders_b = (data->bot_marg - 1) % 16;
		data->nbr_tchuncks = (data->argc - 1 - data->top_marg) / 16;
		data->outsiders_t = (data->argc - 1 - data->top_marg) % 16;
	}
	else
		calculate_smaller_nmbrs(data);
	data->total_left = data->argc - 6;
	data->m_bot = data->nbr_bchuncks;
	data->m_top = data->nbr_tchuncks;
	data->nbrs_bot = data->bot_marg - 1;
	data->nbrs_top = data->argc - 1 - data->top_marg;
}

void	calculate_smaller_nmbrs(t_data *data)
{
	if (data->argc > 70)
	{
		data->chunck_size = 8;
		data->nbr_bchuncks = (data->bot_marg - 1) / 8;
		data->outsiders_b = (data->bot_marg - 1) % 8;
		data->nbr_tchuncks = (data->argc - 1 - data->top_marg) / 8;
		data->outsiders_t = (data->argc - 1 - data->top_marg) % 8;
	}
	else
	{
		data->chunck_size = 4;
		data->nbr_bchuncks = (data->bot_marg - 1) / 4;
		data->outsiders_b = (data->bot_marg - 1) % 4;
		data->nbr_tchuncks = (data->argc - 1 - data->top_marg) / 4;
		data->outsiders_t = (data->argc - 1 - data->top_marg) % 4;
	}
}

int	calculate_limit(t_data *data)
{
	int	limit;

	limit = 0;
	if (data->nbrs_bot / data->chunck_size > 0)
		limit += data->chunck_size;
	if (data->nbrs_top / data->chunck_size > 0)
		limit += data->chunck_size;
	return (limit);
}

int	in_interest_chunks(t_data *data)
{
	if (in_margs(data, data->pos_a[0]) == 1)
	{
		if (data->m_bot > 0)
		{
			if (data->pos_a[0] < data->bot_marg - data->chunck_size \
			* (data->m_bot - 1) && data->pos_a[0] >= data->bot_marg \
			- data->chunck_size * data->m_bot)
				return (1);
		}
		if (data->m_top > 0)
		{
			if (data->pos_a[0] > data->top_marg + data->chunck_size \
			* (data->m_top - 1) && data->pos_a[0] <= data->top_marg \
			+ data->chunck_size * data->m_top)
				return (1);
		}
	}
	return (0);
}

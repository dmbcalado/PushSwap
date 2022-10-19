/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:39:33 by ratinhosujo       #+#    #+#             */
/*   Updated: 2022/10/19 20:42:34 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	else if (data->argc > 70)
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
	data->total_left = data->argc - 6;
	data->m_bot = data->nbr_bchuncks;
	data->m_top = data->nbr_tchuncks;
	data->nbrs_bot = data->bot_marg - 1;
	data->nbrs_top = data->argc - 1 - data->top_marg;
}

void	new_push_to_b(t_data *data)
{
	int	counter;
	int	limit;

	counter = 0;
	calculate_chunck_nmbrs(data);
	limit = calculate_limit(data);
	while (data->total_left > 0)
	{
		if (new_in_chunks(data) == 1)
		{
			counter++;
			pb(data);
			data->total_left--;
		}
		else if (data->pos_a[0] <= data->outsiders_b)
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
		if (counter == limit)
		{
			data->m_bot--;
			data->m_top--;
			limit = calculate_limit(data);
			counter = 0;
		}
	}
}

int	new_in_chunks(t_data *data)
{
	if (data->argc > 200)
	{
		if (in_margs(data, data->pos_a[0]) == 1)
		{
			if (data->m_bot > 0)
			{
				if (data->pos_a[0] < data->bot_marg - 16 * (data->m_bot - 1)\
				&& data->pos_a[0] >= data->bot_marg - 16 * data->m_bot)
					return (1);
			}
			if (data->m_top > 0)
			{
				if (data->pos_a[0] > data->top_marg + 16 * (data->m_top - 1)\
				&& data->pos_a[0] <= data->top_marg + 16 * data->m_top)
				return (1);
			}
		}
	}
	else if (data->argc > 70)
	{
		if (in_margs(data, data->pos_a[0]) == 1)
		{
			if (data->m_bot > 0)
			{
				if (data->pos_a[0] < data->bot_marg - 8 * (data->m_bot - 1)\
				&& data->pos_a[0] >= data->bot_marg - 8 * data->m_bot)
					return (1);
			}
			if (data->m_top > 0)
			{
				if (data->pos_a[0] > data->top_marg + 8 * (data->m_top - 1)\
				&& data->pos_a[0] <= data->top_marg + 8 * data->m_top)
				return (1);
			}
		}
	}
	else if(new_in_smaller_chunks(data) == 1)
		return (1);
	return (0);
}

int	new_in_smaller_chunks(t_data *data)
{
	if (in_margs(data, data->pos_a[0]) == 1)
	{
		if (data->m_bot > 0)
		{
			if (data->pos_a[0] < data->bot_marg - 4 * (data->m_bot - 1)\
			&& data->pos_a[0] >= data->bot_marg - 4 * data->m_bot)
				return (1);
		}
		if (data->m_top >= 0)
		{
			if (data->pos_a[0] > data->top_marg + 4 * (data->m_top - 1)\
			&& data->pos_a[0] <= data->top_marg + 4 * data->m_top)
				return (1);
		}
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choosing_push_to_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:39:33 by ratinhosujo       #+#    #+#             */
/*   Updated: 2022/10/17 22:16:23 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

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
	if (data->argc > 70)
	{
		data->chunck_size = 16;
		data->nbr_bchuncks = (data->bot_marg - 1) / 16;
		data->outsiders_b = (data->bot_marg - 1) % 16;
		data->nbr_tchuncks = (data->argc - 1 - data->top_marg) / 16;
		data->outsiders_t = (data->argc - 1 - data->top_marg) % 16;
	}
	else
	{
		data->chunck_size = 4;
		data->nbr_bchuncks = (data->bot_marg - 1) / 4;
		data->outsiders_b = (data->bot_marg - 1) % 4;
		data->nbr_tchuncks = (data->argc - 1 - data->top_marg) / 4;
		data->outsiders_t = (data->argc - 1 - data->top_marg) % 4;
	}
	data->total_left = data->argc - 6 - (data->outsiders_b + data->outsiders_t);
	data->m_bot = data->nbr_bchuncks;
	data->m_top = data->nbr_tchuncks;
	data->nbrs_bot = data->bot_marg - 1;
	data->nbrs_top = data->argc - 1 - data->top_marg;
}

void	push_outsiders_to_b(t_data *data)
{
	int	counter_b;
	int	counter_t;

	counter_b = data->outsiders_b;
	counter_t = data->outsiders_t;
	printf("outsiders bot : %d\n", data->outsiders_b);
	printf("outsiders top : %d\n", data->outsiders_t);
	while (counter_t + counter_b > 0)
	{
		if (data->pos_a[0] <= data->outsiders_b)
		{
			printf("bot pos_a[0] : %d\n", data->pos_a[0]);
			pb(data);
			counter_b--;
		}
		else if (data->pos_a[0] > data->argc - 1 - data->outsiders_t)
		{
			printf("top pos_a[0] : %d\n", data->pos_a[0]);
			pb(data);
			counter_t--;
		}
		else
			ra(data);
	}
}

void	new_push_to_b(t_data *data)
{
	int	counter;
	int	limit;

	counter = 0;
	calculate_chunck_nmbrs(data);
	limit = calculate_limit(data);
	printf("\n\nhow many to pass: %d\n\n", limit);
	push_outsiders_to_b(data);
	printf("\n\ntotal left: %d\n", data->total_left);
	while (data->total_left > 0)
	{
		printf("pos[0]: %d\n", data->pos_a[0]);
		if (new_in_chunks(data) == 1)
		{
			printf("mbot:%d	mtop:%d	total:%d\n", data->m_bot, data->m_top, data->total_left);
			counter++;
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
			printf("\n inside total left: %d \n", data->total_left);
			printf("mbot : %d	mtop : %d\n", data->m_bot, data->m_top);
			counter = 0;
		}
	}
}

int	new_in_chunks(t_data *data)
{
	if (data->argc > 70)
	{
		if (in_margs(data, data->argc) == 1)
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
	else if(new_in_smaller_chunks(data) == 1)
		return (1);
	return (0);
}

int	new_in_smaller_chunks(t_data *data)
{
	if (in_margs(data, data->argc) == 1)
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
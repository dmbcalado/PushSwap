/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:52:12 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/19 21:37:47 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algorithm_top(t_data *data)
{
	if (data->nbrs_top >= 4)
	{
		sending_top_chuncks(data);
		sorting_top(data);
		data->nbr_tchuncks--;
		data->m_top++;
		gotta_push_them_all(data);
	}
	else
		sorting_top(data);
}

void	algorithm_bot(t_data *data)
{
	if (data->nbrs_bot >= 4)
	{
		sending_bot_chuncks(data);
		sorting_bot(data);
		data->nbr_bchuncks--;
		data->m_bot++;
	}
	else
		sorting_bot(data);
}

void	algorithm(t_data *data)
{
	data->m_bot = 0;
	data->m_top = 0;
	data->nbr_bchuncks = (data->bot_marg - 1) / 4;
	data->nbr_tchuncks = (data->argc - 1 - data->top_marg) / 4;
	while (!(data->nbrs_bot == 0 && data->nbrs_top == 0))
	{
		if (choosing_t_or_b(data) > 0)
			algorithm_top(data);
		else
			algorithm_bot(data);
	}
}

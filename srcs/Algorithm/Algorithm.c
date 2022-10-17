/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:52:12 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/18 00:29:16 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	algorithm_top(t_data *data)
{
	if (data->nbrs_top >= data->chunck_size)
	{
		sending_top_chuncks(data);
		sorting_top(data);
		gotta_push_them_all(data);
		data->nbr_tchuncks--;
		data->m_top++;
	}
	else
		data->nbrs_top = sorting_top(data); //check if i have to push it ra
}

void	algorithm_bot(t_data *data)
{
	if (data->nbrs_bot >= data->chunck_size)
	{
		sending_bot_chuncks(data);
		sorting_bot(data);
		data->nbr_bchuncks--;
		data->m_bot++;
	}
	else
		data->nbrs_bot = sorting_bot(data);
}

void	algorithm(t_data *data)
{
	int	i;

	data->m_bot = 0;
	data->m_top = 0;
	data->nbr_bchuncks = (data->bot_marg - 1) / 4;
	data->nbr_tchuncks = (data->argc - 1 - data->top_marg) / 4;
	while (!(data->nbrs_bot == 0 && data->nbrs_top == 0))
	{
		printf("nbrs at bot : %d\n\n", data->nbrs_bot);
		printf("nbrs at top :  %d\n\n", data->nbrs_top);
		if (choosing_t_or_b(data) > 0)
			algorithm_top(data);
		else
			algorithm_bot(data);
		i = -1;
		while (++i < data->argc - 1)
			printf("a[%d] :	%d		b[%d] :	%d\n", i, data->pos_a[i], i, data->pos_b[i]);
	}
}
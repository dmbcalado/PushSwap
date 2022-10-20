/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:46:40 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/20 02:22:05 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sorting_top(t_data *data)
{
	int	i;

	i = -1;
	if (data->nbrs_top == 1)
	{
		while (data->pos_b[0] != data->argc - 1 && ++i < data->argc - 1)
			rb(data);
		pa(data);
		ra(data);
		data->nbrs_top = 0;
	}
	else
		sort_top_chuncks(data);
}

void	sorting_bot(t_data *data)
{
	int	i;

	i = -1;
	if (data->nbrs_bot == 1)
	{
		while (data->pos_b[0] != 1 && ++i < data->argc - 1)
			rb(data);
		pa(data);
		data->nbrs_bot = 0;
	}
	else
		sort_bot_chuncks(data);
}

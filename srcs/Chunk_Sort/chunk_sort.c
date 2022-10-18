/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:46:40 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/18 17:51:50 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sorting_top(t_data *data)
{
	int	i;
	int	counter;

	i = -1;
	counter = 0;
	if(data->nbrs_top == 1)
	{
		while(data->pos_b[0] != data->argc - 1 && ++i < data->argc - 1)
			rb(data);
		pa(data);
		ra(data);
		data->nbrs_top = 0;
	}
	else if(data->nbrs_top == 2)
	{
		while (counter < data->nbrs_top)
		{
			if (data->pos_b[0] == data->argc - 1 || data->pos_b[0] == data->argc - 2)
			{
				pa(data);
				counter++;
			}
			else
				rb(data);
		}
		sort_two_a(data);
		data->nbrs_top++;
		while(--data->nbrs_top > 0)
			ra(data);
	}
	else
		sort_top_chuncks(data);
}

void	sort_top_chuncks(t_data *data)
{
	int	counter;

	counter = 0;
	if(data->nbrs_top == 3)
	{
		while(counter < data->nbrs_top)
		{
			if (data->pos_b[0] == data->argc - 3 || data->pos_b[0] == data->argc - 2 || data->pos_b[0] == data->argc - 1)
			{
				pa(data);
				counter++;
			}
			else
				rb(data);
		}
		sort_top_three_a(data, data->pos_a);
		data->nbrs_top++;
		while(--data->nbrs_top > 0)
			ra(data);
	}
	else if (data->nbrs_top >= 4)
	{
		sort_top_four_a(data, data->pos_a);
		data->nbrs_top -= 4;
	}
}

void	sorting_bot(t_data *data)
{
	int	i;
	int	counter;
	
	i = -1;
	counter = 0;
	if(data->nbrs_bot == 1)
	{
		while(data->pos_b[0] != 1 && ++i < data->argc - 1)
			rb(data);
		pa(data);
		data->nbrs_bot = 0;
	}
	if(data->nbrs_bot == 2)
	{
		while (counter < data->nbrs_bot)
		{
			if (data->pos_b[0] == 1 || data->pos_b[0] == 2)
			{
				pa(data);
				counter++;
			}
			else
				rb(data);
		}
		sort_two_a(data);
		data->nbrs_bot = 0;
	}
	else
		sort_bot_chuncks(data);
}

void	sort_bot_chuncks(t_data *data)
{
	int	counter;

	counter = 0;
	if(data->nbrs_bot == 3)
	{
		while (counter < data->nbrs_bot)
		{
			if (data->pos_b[0] == 1 || data->pos_b[0] == 2 || data->pos_b[0] == 3)
			{
				pa(data);
				counter++;
			}
			else
				rb(data);
		}
		sort_top_three_a(data, data->pos_a);
		data->nbrs_bot = 0;
	}
	else if (data->nbrs_bot >= 4)
	{
		sort_top_four_a(data, data->pos_a);
		data->nbrs_bot -= 4;
	}
}
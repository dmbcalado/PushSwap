/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choosing_alg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:48:06 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/18 00:22:04 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	choosing_t_or_b(t_data *data)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	if(data->argc >= 70)
	{
		while (data->pos_b[i] != 0 && i < data->argc - 1)
		{
			if (data->pos_b[i] > data->top_marg + 16 * data->m_top &&\
			data->pos_b[i] <= data->top_marg + 16 * (data->m_top + 1))
				count++;
			if (count % 16 == 0 && count != 0)
				break ;
			i++;
		}
		j = choosing_top_or_bot(data);
		if (i <= j && data->nbrs_top != 0)
			return (1);
		else
			return (-1);
	}
	else
		return (choosing_smaller(data));
}

int choosing_smaller(t_data *data)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (data->pos_b[i] != 0 && i < data->argc - 1)
	{
		if (data->pos_b[i] > data->top_marg + 4 * data->m_top &&\
		data->pos_b[i] <= data->top_marg + 4 * (data->m_top + 1))
			count++;
		if (count % 4 == 0 && count != 0)
			break ;
		i++;
	}
	j = choosing_top_or_bot(data);
	if (i <= j && data->nbrs_top != 0)
		return (1);
	else
		return (-1);
}

int	choosing_top_or_bot(t_data *data)
{
	int	j;
	int	count;

	j = 0;
	count = 1;
	if(data->argc >= 70)
	{
		while (data->pos_b[j] != 0 && j < data->argc - 1)
		{
			if (data->pos_b[j] < data->bot_marg - 16 * data->m_bot &&\
			data->pos_b[j] >= data->bot_marg - 16 * (data->m_bot + 1))
				count++;
			if (count % 16 == 0 && count != 0)
				break ;
			j++;
		}
		return (j);
	}
	else
		return (choosing_even_smaller(data));
}

int	choosing_even_smaller(t_data *data)
{
	int	j;
	int	count;

	j = 0;
	count = 1;
	while (data->pos_b[j] != 0 && j < data->argc - 1)
	{
		if (data->pos_b[j] < data->bot_marg - 4 * data->m_bot &&\
		data->pos_b[j] >= data->bot_marg - 4 * (data->m_bot + 1))
			count++;
		if (count % 4 == 0 && count != 0)
			break ;
		j++;
	}
	return (j);
}

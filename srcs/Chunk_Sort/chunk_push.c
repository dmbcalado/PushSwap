/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:49:59 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/20 02:12:06 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sending_top_chuncks(t_data *data)
{
	int	counter;
	int	rb_counter;

	rb_counter = 1;
	counter = 0;
	while (counter < 4)
	{
		if (data->pos_b[0] > data->top_marg + 4 * data->m_top && \
		data->pos_b[0] <= data->top_marg + 4 * (data->m_top + 1))
		{
			pa(data);
			counter++;
		}
		else
		{
			rb(data);
			rb_counter++;
		}
	}
	while (--rb_counter > 0)
		rrb(data);
	return (counter);
}

int	sending_bot_chuncks(t_data *data)
{
	int	counter;
	int	rb_counter;

	counter = 0;
	rb_counter = 1;
	while (counter < 4)
	{
		if (data->pos_b[0] < data->bot_marg - 4 * data->m_bot && \
		data->pos_b[0] >= data->bot_marg - 4 * (data->m_bot + 1))
		{
			pa(data);
			counter++;
		}
		else
		{
			rb(data);
			rb_counter++;
		}
	}
	while (--rb_counter > 0)
		rrb(data);
	return (counter);
}

void	gotta_push_them_all(t_data *data)
{
	int	i;

	i = 0;
	while (++i <= 4)
		ra(data);
}

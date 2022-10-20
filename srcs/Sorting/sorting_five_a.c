/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_five_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:07:23 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/20 02:39:30 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_bigger(t_data *data)
{
	int	i;
	int	bigger;

	i = -1;
	bigger = 0;
	while (++i < 5)
	{
		if (data->pos_a[i] > data->pos_a[bigger])
			bigger = i;
	}
	return (bigger);
}

void	sort_five_a(t_data *data)
{
	int	value;
	int	bigger;

	bigger = find_bigger(data);
	value = data->pos_a[bigger];
	if (bigger < 3)
	{
		while (data->pos_a[4] != value)
			ra(data);
	}
	else if (bigger == 3)
		rra(data);
	sort_top_four_a(data, data->pos_a);
}

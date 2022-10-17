/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_five_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:07:23 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/12 16:19:34 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int find_bigger(int *a, int argc)
{
	int	i;
	int bigger;

	i = -1;
	bigger = 0;
	while(a[++i] != 0 && i < argc - 1)
	{
		if(a[i] > a[bigger])
			bigger = i;
	}
	return (bigger);
}

void	sort_five_a(t_data *data)
{
	int	value;
	int	bigger;

	bigger = find_bigger(data->pos_a, data->argc);
	value = data->pos_a[bigger];
	if (bigger < 3)
	{
		while(data->pos_a[4] != value)
			ra(data);
	}
	else if(bigger == 3)
		rra(data);
	sort_top_four_a(data, data->pos_a);
}

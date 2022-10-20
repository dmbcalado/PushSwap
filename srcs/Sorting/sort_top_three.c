/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:45:04 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/19 22:25:16 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_top_three_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[0] < a[2])
	{
		ra(data);
		sa(data);
		rra(data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[0] < a[2])
		sa(data);
	else if (a[0] < a[1] && a[1] > a[2] && a[0] > a[2])
	{
		ra(data);
		sa(data);
		rra(data);
		sa(data);
	}
	else
		sort_top_threee_a(data, a);
}

void	sort_top_threee_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[0] > a[2])
	{
		sa(data);
		ra(data);
		sa(data);
		rra(data);
	}
	else if (a[0] > a[1] && a[1] > a[2])
	{
		sa(data);
		ra(data);
		sa(data);
		rra(data);
		sa(data);
	}
}
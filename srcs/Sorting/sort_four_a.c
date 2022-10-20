/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:25:49 by dmendonc          #+#    #+#             */
/*   Updated: 2022/03/15 17:25:49 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_four_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] < a[3] && a[0] < a[2])
	{
		ra(data);
		sa(data);
		rra(data);
	}
	else if (a[0] < a[1] && a[1] < a[2] && a[2] > a[3] && a[1] < a[3])
	{
		rra(data);
		rra(data);
		sa(data);
		ra(data);
		ra(data);
	}
	else
		sort_fourr_a(data, a);
}

void	sort_fourr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] > a[3] && a[2] > a[0])
	{
		sa(data);
		ra(data);
	}
	else if (a[0] < a[1] && a[1] < a[2] && a[2] > a[3] && a[1] > a[3] && \
	a[0] < a[3])
	{
		rra(data);
		sa(data);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[2] > a[3] && a[3] > a[0])
	{
		ra(data);
		sa(data);
		ra(data);
		ra(data);
		sa(data);
	}
	else
		sort_fourrr_a(data, a);
}

void	sort_fourrr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] < a[3] && a[0] > a[2])
	{
		rra(data);
		rra(data);
		sa(data);
		ra(data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] < a[3] && a[0] < a[2])
		sa(data);
	else if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[0] < a[3])
	{
		ra(data);
		ra(data);
		sa(data);
		rra(data);
		rra(data);
		sa(data);
	}
	else if (a[0] < a[1] && a[1] < a[2] && a[2] > a[3] && a[0] > a[3])
		rra(data);
	else
		sort_fourrrr_a(data, a);
}

void	sort_fourrrr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] > a[3] && \
	a[0] < a[3])
	{
		sa(data);
		ra(data);
		sa(data);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[2] > a[3] && a[2] > a[0])
	{
		ra(data);
		sa(data);
		ra(data);
		ra(data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] < a[3] && a[0] < a[3])
	{
		rra(data);
		sa(data);
		ra(data);
		ra(data);
	}
	else
		sort_fourrrrr_a(data, a);
}

void	sort_fourrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[0] < a[2] && a[1] < a[3])
	{
		sa(data);
		rra(data);
		sa(data);
	}
	else if (a[0] > a[1] && a[1] > a[2] && a[2] < a[3] && a[0] < a[3])
	{
		rra(data);
		sa(data);
		ra(data);
		ra(data);
		sa(data);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[0] > a[3])
	{
		ra(data);
		ra(data);
	}
	else
		sort_fourrrrrr_a(data, a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top_four_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:06:01 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/20 02:42:38 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_top_four_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] < a[3] && a[0] < a[2])
	{
		ra(data);
		sa(data);
		rra(data);
	}
	else if (a[0] < a[1] && a[1] < a[2] && a[2] > a[3] && a[1] < a[3])
	{
		ra(data);
		ra(data);
		sa(data);
		rra(data);
		rra(data);
	}
	else
		sort_top_fourr_a(data, a);
}

void	sort_top_fourr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] > a[3] && a[2] > a[0])
	{
		ra(data);
		sa(data);
		ra(data);
		sa(data);
		rra(data);
		rra(data);
	}
	else if (a[0] < a[1] && a[1] < a[2] && a[2] > a[3] && a[1] > a[3] && \
	a[0] < a[3])
	{
		ra(data);
		ra(data);
		sa(data);
		rra(data);
		sa(data);
		rra(data);
	}
	else
		sort_top_fourrr_a(data, a);
}

void	sort_top_fourrr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] < a[3] && a[0] > a[2])
	{
		ra(data);
		sa(data);
		rra(data);
		sa(data);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[2] > a[3] && a[3] > a[0])
	{
		ra(data);
		sa(data);
		ra(data);
		sa(data);
		rra(data);
		sa(data);
		rra(data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] < a[3] && a[0] < a[2])
		sa(data);
	else
		sort_top_fourrrr_a(data, a);
}

void	sort_top_fourrrr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] > a[3] && a[2] < a[1] \
	&& a[0] < a[3])
	{
		ra(data);
		sa(data);
		ra(data);
		sa(data);
		rra(data);
		rra(data);
		sa(data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[0] < a[3])
	{
		ra(data);
		ra(data);
		sa(data);
		rra(data);
		rra(data);
		sa(data);
	}
	else
		sort_top_fourrrrr_a(data, a);
}

void	sort_top_fourrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[0] < a[2] && a[1] < a[3])
	{
		sa(data);
		ra(data);
		ra(data);
		sa(data);
		rra(data);
		sa(data);
		rra(data);
	}
	else
		sort_top_fourrrrrr_a(data, a);
}

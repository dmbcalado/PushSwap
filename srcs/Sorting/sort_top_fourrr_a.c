/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top_fourrr_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:32:56 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/20 02:43:59 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_top_fourrrrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[0] < a[2] && a[1] > a[3])
	{
		sa(data);
		ra(data);
		ra(data);
		sa(data);
		rra(data);
		sa(data);
		rra(data);
		sa(data);
	}
	else
		sort_top_fourrrrrrrrrrr_a(data, a);
}

void	sort_top_fourrrrrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[0] && a[2] > a[3])
	{
		ra(data);
		ra(data);
		sa(data);
		pb(data);
		pb(data);
		rra(data);
		rra(data);
		pa(data);
		pa(data);
	}
	else
		sort_top_fourrrrrrrrrrrr_a(data, a);
}

void	sort_top_fourrrrrrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] < a[3] && a[0] > a[3])
	{
		pb(data);
		ra(data);
		ra(data);
		ra(data);
		pa(data);
		rra(data);
		rra(data);
		rra(data);
	}
	else
		sort_top_fourrrrrrrrrrrrr_a(data, a);
}

void	sort_top_fourrrrrrrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] > a[2] && a[2] < a[3] && a[0] > a[3] && a[1] < a[3])
	{
		pb(data);
		sa(data);
		ra(data);
		ra(data);
		pa(data);
		sa(data);
		rra(data);
		rra(data);
	}
	else
		sort_top_fourrrrrrrrrrrrrr_a(data, a);
}

void	sort_top_fourrrrrrrrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[1] < a[3] \
	&& a[0] > a[2])
	{
		pb(data);
		ra(data);
		sa(data);
		ra(data);
		pa(data);
		sa(data);
		rra(data);
		rra(data);
	}
	else
		sort_top_fourrrrrrrrrrrrrrr_a(data, a);
}

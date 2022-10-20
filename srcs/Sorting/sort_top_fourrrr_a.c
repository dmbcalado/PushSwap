/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top_fourrrr_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:48:58 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/20 02:44:29 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_top_fourrrrrrrrrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] > a[2] && a[2] < a[3] && a[1] > a[3])
	{
		sa(data);
		ra(data);
		ra(data);
		pb(data);
		rra(data);
		sa(data);
		rra(data);
		sa(data);
		pa(data);
	}
	else
		ssort_top_fourrrrrrrrrrrrr_a(data, a);
}

void	ssort_top_fourrrrrrrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] > a[2] && a[2] > a[3])
	{
		sa(data);
		ra(data);
		ra(data);
		sa(data);
		pb(data);
		rra(data);
		sa(data);
		rra(data);
		sa(data);
		pa(data);
	}
	else
		sssort_top_fourrrrrrrrrrr_a(data, a);
}

void	sssort_top_fourrrrrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[1] > a[3] \
	&& a[0] > a[2])
	{
		sa(data);
		pb(data);
		ra(data);
		sa(data);
		pb(data);
		rra(data);
		sa(data);
		pa(data);
		pa(data);
		sa(data);
	}
}

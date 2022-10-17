/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top_fourrr_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:32:56 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/09 17:04:40 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_top_fourrrrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[0] < a[2] && a[1] > a[3]) // caso 3 2 4 1 5
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
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[0] && a[2] > a[3]) // caso 3 4 2 1 5
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
	if (a[0] > a[1] && a[1] < a[2] && a[2] < a[3] &&  a[0] > a[3]) // caso 4 1 2 3 5
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
	if (a[0] > a[1] && a[1] > a[2] && a[2] < a[3] && a[0] > a[3] && a[1] < a[3]) // caso 4 2 1 3 5
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
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[1] < a[3] &&  a[0] > a[2]) // caso 4 1 3 2 5
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


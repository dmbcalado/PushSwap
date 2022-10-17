/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top_four_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:06:01 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/09 17:04:40 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_top_four_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] < a[3] && a[0] < a[2]) // caso 1 3 2 4 5 7 8
	{
		ra(data);
		sa(data);
		rra(data);
	}
	else if (a[0] < a[1] && a[1] < a[2] && a[2] > a[3] && a[1] < a[3]) // caso 1 2 4 3 5 9 12 4 3 21 1
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
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] > a[3] && a[2] > a[0]) // caso 1 4 2 3 5
	{
		ra(data);
		sa(data);
		ra(data);
		sa(data);
		rra(data);
		rra(data);
	}
	else if (a[0] < a[1] && a[1] < a[2] && a[2] > a[3] && a[1] > a[3] && a[0] < a[3]) // caso 1 3 4 2 5
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
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] < a[3] && a[0] > a[2]) // caso 2 3 1 4 5
	{
		ra(data);
		sa(data);
		rra(data);
		sa(data);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[2] > a[3] && a[3] > a[0]) // caso 1 4 3 2 5
	{
		ra(data);
		sa(data);
		ra(data);
		sa(data);
		rra(data);
		sa(data);
		rra(data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] < a[3] && a[0] < a[2]) // caso 2 1 3 4 5
		sa(data);
	else
		sort_top_fourrrr_a(data, a);
}

void	sort_top_fourrrr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[1] > a[3]  && a[2] < a[1] && a[0] < a[3]) // caso 2 4 1 3 5
	{
		ra(data);
		sa(data);
		ra(data);
		sa(data);
		rra(data);
		rra(data);
		sa(data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[0] < a[3]) // caso 2 1 4 3 5
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
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[0] < a[2] && a[1] < a[3]) // caso 3 1 4 2 5
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
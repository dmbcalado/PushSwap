/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top_fourr_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:06:01 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/19 18:34:47 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_top_fourrrrrr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] < a[2] && a[2] > a[3] && a[0] > a[3]) // falta ver porque este caso 2 3 4 1 5
	{
		ra(data);
		ra(data);
		sa(data);
		rra(data);
		sa(data);
		rra(data);
		sa(data);
	}
	else
		sort_top_fourrrrrrr_a(data, a);
}

void	sort_top_fourrrrrrr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] > a[3] && a[0] > a[3] && a[0] < a[2]) // caso 2 4 3 1 5
	{
		ra(data);
		sa(data);
		ra(data);
		sa(data);
		rra(data);
		sa(data);
		rra(data);
		sa(data);
	}
	else
		sort_top_fourrrrrrrr_a(data, a);
}

void	sort_top_fourrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] < a[3] && a[0] < a[3]) // caso 3 1 2 4 5
	{
		sa(data);
		ra(data);
		sa(data);
		rra(data);
	}
	else if (a[0] > a[1] && a[1] > a[2] && a[2] < a[3] && a[0] < a[3]) // caso 3 2 1 4 5
	{
		sa(data);
		ra(data);
		ra(data);
		rra(data);
		sa(data);
		rra(data);
		sa(data);
	}
	else
		sort_top_fourrrrrrrrr_a(data, a);
}

void	sort_top_fourrrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[3] && a[0] > a[3]) // caso 3 4 1 2 5 
	{
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
		sort_top_fourrrrrrrrrr_a(data, a);
}

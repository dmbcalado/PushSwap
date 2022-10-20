/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:37:38 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/19 22:23:27 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three_a(t_data *data, int *a)
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
		rra(data);
	else if (a[0] > a[1] && a[1] < a[2] && a[0] > a[2])
		ra(data);
	else if (a[0] > a[1] && a[1] > a[2])
	{
		ra(data);
		sa(data);
	}
}

void	sort_fourrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[0] < a[2] && a[1] > a[3])
	{
		sa(data);
		rra(data);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[2] > a[3] && a[2] < a[0])
	{
		ra(data);
		ra(data);
		sa(data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] < a[3] &&  a[0] > a[3])
		ra(data);
	else if (a[0] > a[1] && a[1] > a[2] && a[2] < a[3] && a[0] > a[3] && a[1] < a[3])
	{
		ra(data);
		sa(data);
	}
	else
		sort_fourrrrrrr_a(data, a);
}

void	sort_fourrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[1] < a[3] &&  a[0] > a[2])
	{
		rra(data);
		sa(data);
		ra(data);
		sa(data);
	}
	else if (a[0] > a[1] && a[1] > a[2] && a[2] < a[3] && a[1] > a[3] && a[1] > a[3])
	{
		sa(data);
		ra(data);
		ra(data);
	}
	else if (a[0] > a[1] && a[1] > a[2] && a[2] > a[3])
	{
		sa(data);
		ra(data);
		ra(data);
		sa(data);
	}
	else
		sort_fourrrrrrrr_a(data, a);
}

void	sort_fourrrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[1] > a[3] &&  a[0] > a[2])
	{
		rra(data);
		sa(data);
		ra(data);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:37:38 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/09 17:04:40 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_three_a(t_data *data, int *a)
{
	if (a[0] < a[1] && a[1] > a[2] && a[0] < a[2]) // caso 1 3 2
	{
		ra(data);
		sa(data);
		rra(data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[0] < a[2])	// caso 2 1 3	
		sa(data);
	else if (a[0] < a[1] && a[1] > a[2] && a[0] > a[2]) // caso 2 3 1
		rra(data);
	else if (a[0] > a[1] && a[1] < a[2] && a[0] > a[2]) // caso 3 1 2	
		ra(data);
	else if (a[0] > a[1] && a[1] > a[2]) // caso 3 2 1
	{
		ra(data);
		sa(data);
	}
}

void	sort_three_b(t_data *data, int *b)
{
	if (b[0] < b[1] && b[1] > b[2] && b[0] < b[2]) // caso 1 3 2
	{
		rb(data);
		sb(data);
		rrb(data);
	}
	else if (b[0] > b[1] && b[1] < b[2] && b[0] < b[2])	// caso 2 1 3	
		sb(data);
	else if (b[0] < b[1] && b[1] > b[2] && b[0] > b[2]) // caso 2 3 1
		rrb(data);
	else if (b[0] > b[1] && b[1] < b[2] && b[0] > b[2]) // caso 3 1 2	
		rb(data);
	else if (b[0] > b[1] && b[1] > b[2]) // caso 3 2 1
	{
		rb(data);
		sb(data);
	}
}

void	sort_fourrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[0] < a[2] && a[1] > a[3]) // caso 3 2 4 1
	{
		sa(data);
		rra(data);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[2] > a[3] && a[2] < a[0]) // caso 3 4 2 1
	{
		ra(data);
		ra(data);
		sa(data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] < a[3] &&  a[0] > a[3]) // caso 4 1 2 3
		ra(data);
	else if (a[0] > a[1] && a[1] > a[2] && a[2] < a[3] && a[0] > a[3] && a[1] < a[3]) // caso 4 2 1 3
	{
		ra(data);
		sa(data);
	}
	else
		sort_fourrrrrrr_a(data, a);
}

void	sort_fourrrrrrr_a(t_data *data, int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[1] < a[3] &&  a[0] > a[2]) // caso 4 1 3 2
	{
		rra(data);
		sa(data);
		ra(data);
		sa(data);
	}
	else if (a[0] > a[1] && a[1] > a[2] && a[2] < a[3] && a[1] > a[3] && a[1] > a[3]) // caso 4 3 1 2
	{
		sa(data);
		ra(data);
		ra(data);
	}
	else if (a[0] > a[1] && a[1] > a[2] && a[2] > a[3]) // caso 4 3 2 1
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
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[3] && a[1] > a[3] &&  a[0] > a[2]) // caso 4 2 3 1
	{
		rra(data);
		sa(data);
		ra(data);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:45:04 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/19 18:34:47 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_top_three_a(t_data *data, int *a)
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
	if (a[0] > a[1] && a[1] < a[2] && a[0] > a[2]) // caso 3 1 2 4
	{
		sa(data);
		ra(data);
		sa(data);
		rra(data);
	}
	else if (a[0] > a[1] && a[1] > a[2]) // caso 3 2 1 4
	{
		sa(data);
		ra(data);
		sa(data);
		rra(data);
		sa(data);
	}
}

void	sort_rev_top_three_b(t_data *data, int *b)
{
	if (b[0] < b[1] && b[1] > b[2] && b[0] < b[2]) // caso 1 3 2 4
	{
		sb(data);
		rb(data);
		sb(data);
		rrb(data);
	}
	else if (b[0] > b[1] && b[1] < b[2] && b[0] < b[2])	// caso 2 1 3 4
	{
		rb(data);
		sb(data);
		rrb(data);
		sb(data);
	}	
	else if (b[0] < b[1] && b[1] > b[2] && b[0] > b[2]) // caso 2 3 1 4
		sb(data);
	else
		sort_rev_top_threee_b(data, b);

}

void	sort_rev_top_threee_b(t_data *data, int *b)
{
	if (b[0] > b[1] && b[1] < b[2] && b[0] > b[2]) // caso 3 1 2 4
	{
		rb(data);
		sb(data);
		rrb(data);
		sb(data);
	}
	else if (b[0] < b[1] && b[1] < b[2]) // caso 1 2 3 4
	{
		sb(data);
		rb(data);
		sb(data);
		rrb(data);
		sb(data);
	}

}
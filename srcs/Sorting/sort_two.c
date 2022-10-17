/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:16:48 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/09 17:04:40 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_two_a(t_data *data)
{
	if (data->pos_a[0] > data->pos_a[1])
		sa(data);
}

void	sort_two_b(t_data *data)
{
	if (data->pos_b[0] > data->pos_b[1])
		sb(data);
}

void	sort_rev_two_b(t_data *data)
{
	if (data->pos_b[1] > data->pos_b[0])
		sb(data);
}
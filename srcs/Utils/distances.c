/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distances.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:08:47 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/09 17:04:40 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	distance_to_first(t_data *data, int nbr)
{
	int	distance_to_first;

	distance_to_first = 2147483647;
	if (in_margs(data, nbr) == 1)
	{
		if (nbr > data->pos_b[0])
			distance_to_first = nbr - data->pos_b[0];
		else
			distance_to_first = data->pos_b[0] - nbr;
	}
	return (distance_to_first);
}

int	distance_to_last(t_data *data, int nbr, int last)
{
	int	distance_to_last;

	distance_to_last = 2147483647;
	if (in_margs(data, nbr) == 1)
	{
		if (nbr > data->pos_b[0])
			distance_to_last = nbr - data->pos_b[last];
		else
			distance_to_last = data->pos_b[last] - nbr;
	}
	return (distance_to_last);
}

int	set_distance(t_data *data)
{
	long int	distance_first;
	long int	distance_last;
	int	last;
	
	last = -1;
	while(data->pos_b[++last] != 0 && last < data->argc - 1)
	distance_first = distance_to_first(data, data->argc);
	distance_last = distance_to_last(data, data->argc, last);
	if (distance_first < 0)
		distance_first *= -1;
	if (distance_last < 0)
		distance_last *= -1;
	if (distance_first > distance_last)
			distance_first = distance_last;
	return (distance_first);
}

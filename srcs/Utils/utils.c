/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:52:31 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/20 01:04:14 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	calc_margs(t_data *data)
{
	data->bot_marg = data->argc / 2 - 2;
	if(data->argc / 2 + 2 < data->argc - 1)
		data->top_marg = data->argc / 2 + 2;
	else
		data->top_marg = data->argc - 1;
}

int	in_margs(t_data *data, int nbr)
{
	if (nbr < data->bot_marg || nbr > data->top_marg)
		return (1);
	else
		return (0);
}

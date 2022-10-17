/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:52:31 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/17 21:52:42 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	lasting(int *list, int argc)
{
	int	last;

	last = 0;
	while(list[last] != 0 && last < argc - 1)
		last++;
	last--;
	return (last);
}

void	calc_margs(t_data *data)
{
	data->bot_marg = data->argc / 2 - 1;
	if(data->argc / 2 + 3 < data->argc - 1)
		data->top_marg = data->argc / 2 + 3;
	else
		data->top_marg = data->argc - 1;
	printf("bot marg: %d\ntop marg: %d\n", data->bot_marg, data->top_marg);
}

int	in_margs(t_data *data, int nbr)
{
	if (nbr < data->bot_marg || nbr > data->top_marg)
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:22:56 by ratinhosujo       #+#    #+#             */
/*   Updated: 2022/10/19 18:34:47 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

void	initial_allocs(t_data *data, int argc, char **argv)
{
	int	i;

	data->steps = 0;
	data->argc = argc;
	data->argv = argv;
	calc_margs(data);
	data->step_list = NULL;
	data->pos_a = malloc((data->argc - 1) * sizeof(int));
	data->pos_b = malloc((data->argc - 1) * sizeof(int));
	data->stack_a = malloc((data->argc - 1) * sizeof(int));
	data->stack_b = malloc((data->argc - 1) * sizeof(int));
	i = -1;
	while(++i < data->argc - 1)
			data->stack_b[i] = -911818475;
	i = -1;
	while (++i < data->argc - 1)
			data->stack_a[i] = ft_atoli(data->argv[i + 1]);
}

void	alloc_steplist(t_data *data)
{
	int	i;
	int	*new_stepl;

	data->steps++;
	new_stepl = (int *)malloc((data->steps) * sizeof(int));
	if(data->step_list != NULL)
	{
		i = -1;
		while (++i < data->steps - 1)
			new_stepl[i] = data->step_list[i];
		free(data->step_list);
	}
	data->step_list = new_stepl;
}
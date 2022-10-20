/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocs_frees.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:22:56 by ratinhosujo       #+#    #+#             */
/*   Updated: 2022/10/20 02:09:40 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	initial_allocs(t_data *data, int argc, char **argv)
{
	int	i;

	data->steps = 0;
	data->argc = argc;
	data->argv = argv;
	calc_margs(data);
	data->step_list = NULL;
	allocations(data);
	i = -1;
	while (++i < data->argc - 1)
			data->stack_b[i] = -911818475;
	i = -1;
	while (++i < data->argc - 1)
			data->stack_a[i] = ft_atoli(data->argv[i + 1]);
}

void	allocations(t_data *data)
{
	data->pos_a = malloc((data->argc - 1) * sizeof(int));
	data->pos_b = malloc((data->argc - 1) * sizeof(int));
	data->stack_a = malloc((data->argc - 1) * sizeof(int));
	data->stack_b = malloc((data->argc - 1) * sizeof(int));
	if (data->pos_a == NULL || data->pos_b == NULL || data->stack_a == NULL \
	|| data->stack_b == NULL)
	{
		write(2, "Error\n", 6);
		exit(2);
	}
}

void	alloc_steplist(t_data *data)
{
	int	i;
	int	*new_stepl;

	data->steps++;
	new_stepl = (int *)malloc((data->steps) * sizeof(int));
	if (new_stepl == NULL)
	{
		write(2, "Error\n", 6);
		exit(2);
	}
	if (data->step_list != NULL)
	{
		i = -1;
		while (++i < data->steps - 1)
			new_stepl[i] = data->step_list[i];
		free (data->step_list);
	}
	data->step_list = new_stepl;
}

void	free_all(t_data *data)
{
	free(data->pos_a);
	free(data->pos_b);
	free(data->stack_a);
	free(data->stack_b);
	free(data->step_list);
}

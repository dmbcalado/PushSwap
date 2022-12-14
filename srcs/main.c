/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:03:14 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/20 01:57:11 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	starting(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->argc - 1)
	{
		data->pos_a[i] = position(data, i);
		data->pos_b[i] = 0;
	}
	push_to_b(data);
	sort_five_a(data);
	algorithm(data);
}

void	handling_phew_args(t_data *data, int argc, char **argv)
{
	int	i;

	i = -1;
	initial_allocs(data, argc, argv);
	while (++i < data->argc - 1)
	{
		data->pos_a[i] = position(data, i);
		data->pos_b[i] = 0;
	}
	if (data->argc == 6)
		sort_five_a(data);
	else if (data->argc == 5)
		sort_four_a(data, data->pos_a);
	else if (data->argc == 4)
		sort_three_a(data, data->pos_a);
	else if (data->argc == 3)
		sort_two_a(data);
	else
		exit(0);
	run_operations(data);
	free_all(data);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc >= 7 && check_if_legal(argc, argv) == 0)
	{
		initial_allocs(&data, argc, argv);
		starting(&data);
		run_operations(&data);
		free_all(&data);
	}
	else if (argc >= 2 && check_if_legal(argc, argv) == 0)
		handling_phew_args(&data, argc, argv);
	else
	{
		write(2, "Error\n", 6);
		exit(2);
	}
}

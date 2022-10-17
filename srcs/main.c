/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:03:14 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/18 00:42:29 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	starting(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->argc - 1)
	{
		data->pos_a[i] = position(data, i);
		data->pos_b[i] = 0;
	}
	new_push_to_b(data);
	sort_five_a(data);
	i = -1;
	printf("after the sorting 5 a:\n\n");
	while (++i < data->argc - 1)
		printf("a[%d] :	%d		b[%d] :	%d\n", i, data->pos_a[i], i, data->pos_b[i]);
	printf("\n\n");
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
	else if(data->argc == 5)
		sort_four_a(data, data->pos_a);
	else if(data->argc == 4)
		sort_three_a(data, data->pos_a);
	else
		sort_two_a(data);
	run_operations(data);
	free_all(data);
}

int	main(int argc, char **argv)
{
	int	i;
	t_data	data;

	i = -1;
	if (argc >= 7 && check_if_legal(argc, argv) == 0)
	{
		initial_allocs(&data, argc, argv);
		starting(&data);
		run_operations(&data);
		i = -1;
		while(++i < data.argc - 1)
			printf("a[%d]: %d\n", i, data.stack_a[i]);
		free_all(&data);
	}
	else if (argc >= 3 && check_if_legal(argc, argv) == 0)
		handling_phew_args(&data, argc, argv);
	else
	{
		printf("Nate Dogg and Warren G have to regulate.\n");
		exit(0);
	}
}

void	free_all(t_data *data)
{
	free(data->pos_a);
	free(data->pos_b);
	free(data->stack_a);
	free(data->stack_b);
	free(data->step_list);
}
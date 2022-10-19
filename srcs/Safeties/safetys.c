/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safetys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:55:11 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/19 18:34:47 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_if_legal(int argc, char **argv)
{
	if (check_if_more_then_nbrs(argc, argv) > 0)
	{
		write(2, "Error\n", 6);
		exit(2);
	}
	if (check_if_repeated(argc, argv) > 0)
	{
		write(2, "Error\n", 6);
		exit(2);
	}
	check_if_all_legal_ints(argc, argv);
	return (0);
}

int	check_if_more_then_nbrs(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
		{
			if (argv[i][j] != 45 && (argv[i][j] < 48 || argv[i][j] > 57))
				return (1);
		}
	}
	return (0);
}

int	check_if_repeated(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (++j < argc)
		{
			k = 0;
			if (argv[i][k] == argv[j][k] && i != j)
				k = cont_how_many_equal(argv, i, j);
			if (k == -10)
				return (1);
		}
	}
	return (0);
}

int	check_if_all_legal_ints(int argc, char **argv)
{
	int	i;
	
	i = 0;
	while (++i < argc)
		ft_atoli(argv[i]);
	return (0);
}

int	cont_how_many_equal(char **argv, int i, int j)
{
	int k;
	int	k2;

	k = 0;
	k2 = 0;
	if(i != j)
	{
		while(argv[i][++k])
		{
			if (i == j || argv[i][k] != argv[j][k])
				return (0);
		}
		while(argv[j][++k2])
		{
			if (i == j || argv[i][k2] != argv[j][k2])
				return (0);
		}
		return (-10);
	}
	else
		return (0);
}

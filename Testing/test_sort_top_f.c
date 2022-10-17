/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort_top_f.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:19:42 by dmendonc          #+#    #+#             */
/*   Updated: 2022/10/09 17:04:40 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/* int **samples_gen(int **pseudo_a , int n)
{
	int	i;
	int	j;
	int	flag;
	static int random;

	i = 0;
	j = 0;
	flag = 0;
	pseudo_a[n][4] = 5;
	while (i < 4)
	{
		random = rand() % 5;
		pseudo_a[n][i] = random;
		while (j < 4)
		{
			if (i != j)
			{
				if (pseudo_a[n][i] == pseudo_a[n][j] || pseudo_a[n][i] == 0)
					flag = 1;	
			}
			j++;
		}
		j = 0;
		if(flag == 0)
			i++;
		else
			flag = 0;
	}
	return (pseudo_a);
}

void	testing_if_ko(int **pseudo_a, int n)
{
	int i;
	int test;
	int	ok;
	
	i = -1;
	ok = 1;
	test = 1;
	while (++i < 4)
	{
		if(pseudo_a[n][i] != test)
			ok = 0;
		test++;
	}
	if (ok == 0)
		printf("		KO");
	else
		printf("		OK");
}

void testing_sort_top(int **pseudo_a, int **pseudo_b, int total_samples)
{
	int	i;
	int	sample;

	i = -1;
	sample = -1;
	while (++sample < total_samples)
	{
		pseudo_a = samples_gen(pseudo_a, sample);
		while(++i< 5)
			printf("%d ",pseudo_a[sample][i]);
		sort_top_four_b(pseudo_a[sample], pseudo_b[sample], 5);
		printf("		");
		i = -1;
		while(++i< 5)
			printf("%d ", pseudo_a[sample][i]);
		testing_if_ko(pseudo_a, sample);
		i = -1;
		printf("\n\n");
		sample ++;
	}
} */

/* int	main(void)
{
	int	n;
	int	samples;
	int	**pseudo_a;
	int **pseudo_b;
	
	n = -1;
	samples = 500;
	pseudo_a = (int **)malloc(samples * sizeof(int *));
	pseudo_b = (int **)malloc(samples * sizeof(int *));
	while (++n < samples)
	{
		pseudo_a[n] = malloc((4) * sizeof(int));
		pseudo_b[n] = malloc((4) * sizeof(int));
	}
	printf("\nunsorted:		sorted:\n\n");
	testing_sort_top(pseudo_a, pseudo_b, samples);
} */
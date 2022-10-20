/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:24:05 by dmendonc          #+#    #+#             */
/*   Updated: 2022/03/08 12:24:05 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648
# define PB -2
# define PA -1
# define RA  1
# define RB  2
# define RRA 3
# define RRB 4
# define SA  5
# define SB  6

typedef struct s_data
{
	char	**argv;
	int		argc;
	int		m_bot;
	int		m_top;
	int		steps;
	int		*pos_a;
	int		*pos_b;
	int		bot_marg;
	int		top_marg;
	int		nbrs_bot;
	int		nbrs_top;
	int		*stack_a;
	int		*stack_b;
	int		*step_list;
	int		total_left;
	int		bot_chuncks;
	int		top_chuncks;
	int		outsiders_b;
	int		outsiders_t;
	int		chunck_size;
	int		nbr_bchuncks;
	int		nbr_tchuncks;
}	t_data;

// -|-|-|-  0 - SAFETIES  -|-|-|-

int		check_if_legal(int argc, char **argv);
int		check_if_repeated(int argc, char **argv);
int		check_if_more_then_nbrs(int argc, char **argv);
int		check_if_all_legal_ints(int argc, char **argv);
int		cont_how_many_equal(char **argv, int i, int j);

// -|-|-|-  1 - ALLOCATIONS & FREES -|-|-|-

void	free_all(t_data *data);
void	allocations(t_data *data);
void	alloc_steplist(t_data *data);
void	initial_allocs(t_data *data, int argc, char **argv);

// -|-|-|-  2 - OPERATIONS  -|-|-|-

// ------------  2.1 - MARGES & DISTANCES -----

int		ft_atoli(char *str);
void	check_atoli(long int number);
void	calc_margs(t_data *data);
int		in_margs(t_data *data, int nbr);
int		position(t_data *data, int i);

// ------------  2.1 - RS RRS  ----------------

int		ra(t_data *data);
int		rb(t_data *data);
int		real_ra(t_data *data);
int		real_rb(t_data *data);
int		rr(t_data *data);
int		rra(t_data *data);
int		real_rra(t_data *data);
int		real_rrb(t_data *data);
int		rrb(t_data *data);
int		rrr(t_data *data);

// ------------  2.2 - PUSHS   ----------------

int		pa(t_data *data);
int		pb(t_data *data);
int		real_pa(t_data *data);
int		real_pb(t_data *data);

// ------------  2.3 - SWAPS   ----------------

int		sa(t_data *data);
int		sb(t_data *data);
int		ss(t_data *data);
int		real_sa(t_data *data);
int		real_sb(t_data *data);

// -|-|-|-  3 - SORTING FUNCTIONS  -|-|-|-
// ------------  3.0 - SORTING -----------

void	sort_two_a(t_data *data);
void	sort_three_a(t_data *data, int *a);
void	sort_four_a(t_data *data, int *a);
void	sort_fourr_a(t_data *data, int *a);
void	sort_fourrr_a(t_data *data, int *a);
void	sort_fourrrr_a(t_data *data, int *a);
void	sort_fourrrrr_a(t_data *data, int *a);
void	sort_fourrrrrr_a(t_data *data, int *a);
void	sort_fourrrrrrr_a(t_data *data, int *a);
void	sort_fourrrrrrrr_a(t_data *data, int *a);

// ------------ 2.3 - SORTING "TOP" as in top of the stack ---------

void	sort_top_three_a(t_data *data, int *a);
void	sort_top_threee_a(t_data *data, int *a);
void	sort_top_four_a(t_data *data, int *a);
void	sort_top_fourr_a(t_data *data, int *a);
void	sort_top_fourrr_a(t_data *data, int *a);
void	sort_top_fourrrr_a(t_data *data, int *a);
void	sort_top_fourrrrr_a(t_data *data, int *a);
void	sort_top_fourrrrrr_a(t_data *data, int *a);
void	sort_top_fourrrrrrr_a(t_data *data, int *a);
void	sort_top_fourrrrrrrr_a(t_data *data, int *a);
void	sort_top_fourrrrrrrrr_a(t_data *data, int *a);
void	sort_top_fourrrrrrrrrr_a(t_data *data, int *a);
void	sort_top_fourrrrrrrrrrr_a(t_data *data, int *a);
void	sort_top_fourrrrrrrrrrrr_a(t_data *data, int *a);
void	sort_top_fourrrrrrrrrrrrr_a(t_data *data, int *a);
void	sort_top_fourrrrrrrrrrrrrr_a(t_data *data, int *a);
void	sort_top_fourrrrrrrrrrrrrrr_a(t_data *data, int *a);
void	ssort_top_fourrrrrrrrrrrrr_a(t_data *data, int *a);
void	sssort_top_fourrrrrrrrrrr_a(t_data *data, int *a);

//_________________________________________________________________

//%%-@@-|-@@-|-@@-^^%%		ALGORITHM		%%^^-@@-|-@@-|-@@-|-@@-%%
//%%-@@-|-@@-|-@@-^^%%		PUSH SWAP		%%^^-@@-|-@@-|-@@-|-@@-%%

//_________________________________________________________________

//_________________________________________________________________
//	\-@@-@@-|^^%%&&&&#£	 !! FIRST PART !!		£#&&&&%%^^|-@@-@@-/
// 	    BY WORKING WITH THE FINAL POSITIONS OF EACH NUMBER
//	   GET THE STEPS NEEDED TO SORT THE TRUE A AND B STACKS
//	   STORING THEM WITH AN INDEX: 
//	   PB  = -2  PA  = -1
//	   RA  =  1  RB  =  2
//	   RRA =  3  RRB =  4
//	   SA  =  5  SB  =  6
//	   AND WHILE REPLAYING THE STEPS ON THE TRUE STACKS, 
//	   FINDING THE MOST COMMON TIMES ITS LEGAL TO USE RR & RRR.

//	-@@|@@-^^%%		1ST STEP:		%%^^-@@|@@-
//	    PUSH ALL ELEMENTS BESIDES MID 5 TO B.
//	   BUT PUSH THEM SELECTIVELY TO HELP FORMING THE CHUNCKS

int		calculate_limit(t_data *data);
int		in_interest_chunks(t_data *data);
int		in_smaller_chunks(t_data *data);
int		even_smaller_chunks(t_data *data);
void	calculate_chunck_nmbrs(t_data *data);
void	calculate_smaller_nmbrs(t_data *data);
void	push_to_b(t_data *data);

//-@@|@@-^^%%		2ND STEP:		£#&&&&%%^^-@@|@@-
//					 SORT A

void	sort_five_a(t_data *data);
int		find_bigger(t_data *data);

//-@@|@@-^^%%		3RD STEP:		%%^^-@@|@@-
// 		  SENDING AND SORTING CHUNCKS

int		sending_top_chuncks(t_data *data);
int		sending_bot_chuncks(t_data *data); //
void	sort_top_chuncks(t_data *data);
void	sort_top_chunckss(t_data *data);
void	sort_top_chuncksss(t_data *data);
void	sort_bot_chuncks(t_data *data);
void	sort_bot_chunckss(t_data *data);
void	sorting_top(t_data *data);
void	sorting_bot(t_data *data);
void	gotta_push_them_all(t_data *data);

//-@@|@@-^^%%		LAST STEP:		%%^^-@@|@@-
// 		  		  THE ALGORITHM

// @@@@@@@   CHOOSING WICH ALGORITM TO RUN   @@@@@@@

int		choosing_t_or_b(t_data *data);
int		choosing_top_or_bot(t_data *data);

// @@@@@@@	ALGORITHMS TO TOP AND BOT CHUNKS	@@@@@@@

void	algorithm_top(t_data *data);
void	algorithm_bot(t_data *data);

// @@@@@@@@@@@@##|	MAIN ALGORITHM	|##@@@@@@@@@@@@@

void	starting(t_data *data);

void	algorithm(t_data *data);
void	first_part(t_data *data);
void	second_part(t_data *data);
void	run_operations(t_data *data);
int		run_operations_two(t_data *data, int i);
int		run_operations_three(t_data *data, int i);
int		run_operations_four(t_data *data, int i);
int		run_operations_five(t_data *data, int i);
int		run_operations_six(t_data *data, int i);
void	handling_phew_args(t_data *data, int argc, char **argv);

#endif
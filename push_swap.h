/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:28:17 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/30 20:28:17 by oozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}				t_stack;

void	onearg(t_stack **stack_a, int argc, char **argv);
void	omorearg(t_stack **stack_a, char **argv, int argc);
void	push(t_stack **stack_a, int data);
void	error(t_stack *stack_a);
void	printlist(t_stack *stack);
int		listsize(t_stack *stack_a);
int		check(t_stack *stack_a, t_stack *tmp);
int		is_number(int argc, char **argv);
int		is_sorted(t_stack *stack_a);
int		is_uniq(t_stack *stack_a);
int		ft_strlen(const char *str);
int		ft_atoi(const char *str);
int		take_data(t_stack *list, int i);
t_stack	*listwhere(t_stack *list, int i);
t_stack	*ft_lstlast(t_stack *lst);
//			SORT&ALGO		//
void	three_sort(t_stack **stack);
void	five_sort(t_stack **stack_a, t_stack **stack_b);
void	radi_go(t_stack **stack_a, t_stack **stack_b);
//			INDEX			//
int		big_index(t_stack *stack);
int		min_index(t_stack *stack);
void	index_push(t_stack *stack_a);
//			RULES	1		//
void	sa(t_stack *lst_a);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rra(t_stack	**stack_a);
//			RULES	2		//
void	sb(t_stack *stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	rb(t_stack **stack_b);
void	rrb(t_stack **stack_b);
//			RULES	3		//
void	ss(t_stack **stack_a, t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_pb_rb_rrb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:28:29 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/30 20:28:30 by oozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *stack_b)
{
	int	tmp;

	tmp = stack_b->next->data;
	stack_b->next->data = stack_b->data;
	stack_b->data = tmp;
	write(1, "sb\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*f_a;
	t_stack	*f_b;

	f_a = *stack_a;
	f_b = *stack_b;
	*stack_a = (*stack_a)->next;
	*stack_b = f_a;
	(*stack_b)->next = f_b;
	write(1, "pb\n", 3);
}

void	rb(t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*last;

	last = ft_lstlast(*stack_b);
	first = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	last->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
}

void	rrb(t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*iter;

	first = ft_lstlast(*stack_b);
	iter = (*stack_b);
	while (iter->next->next != NULL)
		iter = iter->next;
	iter->next = NULL;
	first->next = (*stack_b);
	(*stack_b) = first;
	write(1, "rrb\n", 4);
}

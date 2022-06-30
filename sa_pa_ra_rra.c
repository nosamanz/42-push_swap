/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_pa_ra_rra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:28:25 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/30 20:28:25 by oozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	int	tmp;

	tmp = stack_a->next->data;
	stack_a->next->data = stack_a->data;
	stack_a->data = tmp;
	write(1, "sa\n", 3);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*f_a;
	t_stack	*f_b;

	f_a = *stack_a;
	f_b = *stack_b;
	*stack_b = (*stack_b)->next;
	*stack_a = f_b;
	(*stack_a)->next = f_a;
	write(1, "pa\n", 3);
}

void	ra(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*last;

	last = ft_lstlast(*stack_a);
	first = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	rra(t_stack	**stack_a)
{
	t_stack	*first;
	t_stack	*iter;

	first = ft_lstlast(*stack_a);
	iter = (*stack_a);
	while (iter->next->next != NULL)
		iter = iter->next;
	iter->next = NULL;
	first->next = (*stack_a);
	(*stack_a) = first;
	write(1, "rra\n", 4);
}

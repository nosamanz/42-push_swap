/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:28:33 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/30 20:28:33 by oozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_stack **stack)
{
	if (big_index(*stack) == 0 && min_index(*stack) == 2
		&& listsize(*stack) != 2)
	{
		sa(*stack);
		rra(stack);
	}
	else if (big_index(*stack) == 0 && listsize(*stack) == 2)
		sa(*stack);
	else if (big_index(*stack) == 0 && is_sorted((*stack)->next))
		ra(stack);
	else if (big_index(*stack) == 1 && min_index(*stack) == 0)
	{
		rra(stack);
		sa(*stack);
	}
	else if (big_index(*stack) == 1 && min_index(*stack) == 2)
		rra(stack);
	else
		sa(*stack);
}

void	five_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	index;

	while (listsize(*stack_a) > 3)
	{
		index = min_index(*stack_a);
		if (index == 0)
			pb(stack_a, stack_b);
		else if (index <= listsize(*stack_a) / 2 && index != 0)
			ra(stack_a);
		else if (index >= listsize(*stack_a) / 2 && index != 0)
			rra(stack_a);
	}
	if (listsize(*stack_a) <= 3 && !(is_sorted(*stack_a)))
		three_sort(stack_a);
	while (listsize(*stack_b) > 0)
		pa(stack_a, stack_b);
}

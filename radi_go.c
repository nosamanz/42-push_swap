/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radi_go.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:28:20 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/30 20:28:20 by oozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radi_go(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	j;
	int	len;
	int	data1;

	i = 0;
	j = 0;
	len = listsize(*stack_a);
	while (is_sorted(*stack_a) == 0)
	{
		j = 0;
		while (j < len)
		{
			data1 = listwhere(*stack_a, 0)->index;
			if (((data1 >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (listsize(*stack_b) > 0)
			pa(stack_a, stack_b);
		i++;
	}
}

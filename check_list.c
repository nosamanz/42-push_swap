/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:27:39 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/30 20:27:39 by oozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(t_stack *stack_a, t_stack *tmp)
{
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		if (tmp->data == stack_a->data)
			return (0);
	}
	tmp = NULL;
	return (1);
}

int	is_sorted(t_stack *stack_a)
{
	while (stack_a->next != NULL)
	{
		if (stack_a->data < stack_a->next->data)
			stack_a = stack_a->next;
		else
			return (0);
	}
	return (1);
}

int	is_uniq(t_stack *stack_a)
{
	t_stack	*tmp;

	tmp = stack_a;
	while (stack_a->next != NULL)
	{
		if (!(check(stack_a, tmp)))
			return (0);
		stack_a = stack_a->next;
		tmp = tmp->next;
	}
	return (1);
}

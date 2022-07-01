/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:27:51 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/30 20:27:51 by oozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*listwhere(t_stack *list, int i)
{
	int	j;

	j = 0;
	if (!list)
		return (0);
	while (list != NULL && j < i)
	{
		list = list->next;
		j++;
	}
	return (list);
}

int	take_data(t_stack *list, int i)
{
	int	data;
	int	j;

	j = 0;
	while (j <= i && list != NULL)
	{
		data = list->data;
		list = list->next;
		j++;
	}
	return (data);
}

void	index_push(t_stack *stack_a)
{
	int	indis;
	int	d1;
	int	d2;
	int	i;
	int	j;

	i = 0;
	while (i < listsize(stack_a))
	{
		indis = 0;
		d1 = take_data(stack_a, i);
		j = 0;
		while (j < listsize(stack_a))
		{
			d2 = take_data((stack_a), j);
			if (d1 > d2)
				indis++;
			j++;
		}
		listwhere(stack_a, i)->index = indis;
		i++;
	}
}

int	big_index(t_stack *stack)
{
	t_stack	*tmp;
	int		i;

	tmp = stack;
	i = 0;
	while (stack != NULL)
	{
		if (tmp->data >= stack->data)
			stack = stack->next;
		else
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}

int	min_index(t_stack *stack)
{
	t_stack	*tmp;
	int			i;

	tmp = stack;
	i = 0;
	while (stack != NULL)
	{
		if (tmp->data <= stack->data)
			stack = stack->next;
		else
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}

// int	min_index(t_stack *stack)
// {
// 	int		i;
// 	int		min;
// 	t_stack	*temp;

// 	temp = stack;
// 	min = stack->data;
// 	stack = stack -> next;
// 	i = 0;
// 	while (stack != NULL)
// 	{
// 		if (min > stack->data)
// 			min = stack->data;
// 		stack = stack -> next;
// 	}
// 	while (temp -> data != min)
// 	{
// 		i++;
// 		temp = temp -> next;
// 	}
// 	return (i);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:28:12 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/30 20:28:12 by oozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	printlist(t_stack *stack)
// {
// 	t_stack	*q;

// 	q = stack;
// 	while (q != NULL)
// 	{
// 		//printf("%d->", q->data);
// 		q = q->next;
// 	}
// 	//printf("\n");
// }

t_stack	*push_swap(t_stack *stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	index_push(stack_a);
	if (listsize(stack_a) <= 3 && !is_sorted(stack_a))
		three_sort(&stack_a);
	else if (listsize(stack_a) <= 5 && !is_sorted(stack_a))
		five_sort(&stack_a, &stack_b);
	else
		radi_go(&stack_a, &stack_b);
	return (stack_a);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack;

	stack_a = NULL;
	if (!(is_number(argc, argv)))
		error(stack_a);
	if (argc == 2)
		onearg(&stack_a, argc, argv);
	else if (argc > 1)
		omorearg(&stack_a, argv, argc);
	if (!(stack_a))
		error(stack_a);
	if (!(is_uniq(stack_a)))
		error(stack_a);
	//printlist(stack_a);
	stack = push_swap(stack_a);
	//printlist(stack);
}

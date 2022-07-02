/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:26:23 by oozcan            #+#    #+#             */
/*   Updated: 2022/07/02 13:17:04 by oozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **stack_a, int data)
{
	t_stack	*tmp;

	tmp = malloc(sizeof(t_stack));
	tmp->data = data;
	tmp->next = NULL;
	if (!(*stack_a))
	{
		(*stack_a) = tmp;
		return ;
	}
	tmp->next = (*stack_a);
	(*stack_a) = tmp;
}

void	onearg(t_stack **stack_a, int argc, char **argv)
{
	int	j;

	j = 0;
	argc--;
	j = ft_strlen(argv[argc]);
	while (argv[argc][--j] && j >= 0)
	{
		if (argv[argc][j + 1] == '\0' && argv[argc][j] == ' ')
		{
			while (argv[argc][j] == 32)
				j--;
		}
		while ((argv[argc][j] >= '0' && argv[argc][j] <= '9')
				|| argv[argc][j] == '-')
			j--;
		push(stack_a, ft_atoi(&argv[argc][j + 1]));
		while (argv[argc][j] == ' ')
			j--;
		if (j == 0)
			push(stack_a, ft_atoi(&argv[argc][j]));
	}
}

void	omorearg(t_stack **stack_a, char **argv, int argc)
{
	while (--argc >= 1)
		push(stack_a, ft_atoi(argv[argc]));
}

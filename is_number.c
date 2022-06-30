/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:28:05 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/30 20:28:06 by oozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number1(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
			i++;
		else if (argv[1][i] <= 32 || argv[1][i] == '+' || argv[1][i] == '-')
			i++;
		else
			return (0);
	}
	return (1);
}

int	is_number_1more(int argc, char **argv)
{
	int	i;

	i = 0;
	while (--argc)
	{
		while (argv[argc][i] != '\0')
		{
			if (argv[argc][i] >= '0' && argv[argc][i] <= '9')
				i++;
			else if (argv[argc][i] <= 32 ||
					argv[argc][i] == '+' || argv[argc][i] == '-')
				i++;
			else
				return (0);
		}
		i = 0;
	}
	return (1);
}

int	is_number(int argc, char **argv)
{
	if (argc == 2)
	{
		if (is_number1(argv) == 0)
			return (0);
	}
	else
	{
		if (is_number_1more(argc, argv) == 0)
			return (0);
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:40:45 by theveste          #+#    #+#             */
/*   Updated: 2024/06/26 15:58:07 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * We will first check the input we are given
 * Obviously - no input will just return an Error and give back the terminal
 * 				- 1 arg will be the list of the number
 * 					- check if there is only number beetween int MAX and int MIN
 * 					- check if there is no double number
 *			- 2 args or more
					- same check as one arg,
					check if int and string are mix, say no (fuck it)
*/

void	args_checking(int argc, char **argv, t_cnt *data)
{
	if (argc < 2)
	{
		ft_printf("Error\nThis program take at least one argument");
		exit(EXIT_FAILURE);
	}
	else if (argc == 2)
	{
		data->multi_args = 0;
		if (list_is_valid(argv[1], data) == 0) // if no, 0.1 live
			exit(EXIT_FAILURE);
	}
	else
	{
		data->multi_args = 1;
		data->list_of_number = argv;
		// while (data->list_of_number[i] != NULL)
		// {
		// 	ft_printf("%s\n", data->list_of_number[i]);
		// 	i++;
		// }
		data->idx = 1;
		if (list_is_valid_mulitple_arg(data) == 0)
			exit(EXIT_FAILURE);
	}
}

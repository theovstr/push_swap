/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiple_arg_checker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:28:12 by theveste          #+#    #+#             */
/*   Updated: 2024/06/25 13:55:28 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	list_is_valid_mulitple_arg(t_cnt *data)
{
	if (data->list_of_number == NULL)
		return (0);
	if (data->list_of_number[data->idx] == NULL)
	{
		ft_printf("Error\nNo item in list !");
		free(data->list_of_number);
		return (0);
	}
	data->list_size = lenght_of_list(data->list_of_number);
	while (data->list_of_number[data->idx] != NULL)
	{
		if (ft_atoi(data->list_of_number[data->idx]) == 0
			|| only_number(data->list_of_number[data->idx]) == 0)
		{
			ft_printf("Error\nLa liste ne doit comporter que des nombres,\
				rien d'autre");
			if (data->multi_args == 0)
				ft_free(data->list_of_number, data->list_size);
			exit(EXIT_FAILURE);
		}
		data->idx += 1;
	}
	double_in_list(data);
	return (1); // 0.1 live if no err
}

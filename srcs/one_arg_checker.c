/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_arg_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:55:35 by theveste          #+#    #+#             */
/*   Updated: 2024/07/01 18:00:51 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * We only have one argument that is given to us, therefore,
 * I will split the string into a two dimension array,
	and check the valididty of the number for each value
 * this way i will check if all of the value are ok
 */

int	only_number(char *str)
{
	int	idx;

	idx = 1;
	if (str[0] == '\0')
		return (0);
	while (str[idx] != '\0')
	{
		if (!(str[idx] >= '0' && str[idx] <= '9'))
			return (0);
		idx += 1;
	}
	return (1);
}

int	lenght_of_list(char **list)
{
	int	i;

	i = 0;
	while (list[i] != NULL)
		i++;
	return (i);
}

void	double_in_list(t_cnt *data)
{
	int	idx;
	int	comp;

	idx = 0;
	while (data->list_of_number[idx] != NULL)
	{
		comp = idx + 1;
		while (data->list_of_number[comp] != NULL)
		{
			if (ft_strcmp(data->list_of_number[idx],
					data->list_of_number[comp]) == 0)
			{
				ft_printf("Error\n");
				if (data->multi_args == 0)
					ft_free(data->list_of_number, data->list_size);
				exit(EXIT_FAILURE);
			}
			comp += 1;
		}
		idx += 1;
	}
}

int	list_is_valid(char *str, t_cnt *data)
{
	data->idx = 0;
	data->list_of_number = ft_split(str, ' ');
	if (data->list_of_number == NULL)
		return (0);
	if (data->list_of_number[data->idx] == NULL)
	{
		ft_printf("Error\n");
		free(data->list_of_number);
		return (0);
	}
	data->list_size = lenght_of_list(data->list_of_number);
	while (data->list_of_number[data->idx] != NULL)
	{
		if ((ft_atoi(data->list_of_number[data->idx]) == 0 
			&& reel_zero(data->list_of_number[data->idx]) == 0)	
			|| only_number(data->list_of_number[data->idx]) == 0)
		{
			ft_printf("Error\n");
			ft_free(data->list_of_number, data->list_size);
			exit(EXIT_FAILURE);
		}
		data->idx += 1;
	}
	double_in_list(data);
	return (1);
}

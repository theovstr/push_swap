/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiple_arg_checker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:28:12 by theveste          #+#    #+#             */
/*   Updated: 2024/07/01 15:06:15 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// void	check_int_str_mixed(t_cnt *data)
// {
// 	char *str;
// 	int	i;

// 	i = 2;
// 	str = data->list_of_number[1];
// 	while (data->list_of_number[i] != NULL)
// 	{
// 		str = ft_strjoin(str, data->list_of_number[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == '"')
// 		{
// 			ft_printf("Error\nMixed int and str are not allowed");
// 			exit(EXIT_FAILURE);
// 		}
// 		i++;

// 	}
// 	ft_printf("%s\n", str);
// }

int	list_is_valid_mulitple_arg(t_cnt *data)
{
	if (data->list_of_number == NULL)
		return (0);
	data->list_size = lenght_of_list(data->list_of_number);
	while (data->list_of_number[data->idx] != NULL)
	{
		if (ft_atoi(data->list_of_number[data->idx]) == 0
			|| only_number(data->list_of_number[data->idx]) == 0)
		{
			ft_printf("Error\n");
			if (data->multi_args == 0)
				ft_free(data->list_of_number, data->list_size);
			exit(EXIT_FAILURE);
		}
		data->idx += 1;
	}
	double_in_list(data);
	return (1); // 0.1 live if no err
}

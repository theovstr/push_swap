/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:33:37 by theveste          #+#    #+#             */
/*   Updated: 2024/06/20 17:57:10 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * Creating the structure
 */

int	main(int argc, char **argv)
{
	t_cnt	data;

	args_checking(argc, argv, &data); // 0.1 live if no error
	ft_printf("Ending is ok !");
	ft_free(data.list_of_number, data.list_size);
}
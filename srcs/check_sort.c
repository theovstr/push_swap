/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:20:06 by theveste          #+#    #+#             */
/*   Updated: 2024/07/01 15:31:27 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * Check if the list is sorted in ascending order 
 * by comparing each value with the next one in the list, 
 * if the next value is inferior to the actual one, then the list is not sorted !
 */

int	ft_check_sorted(t_stack *a)
{
	t_stack	*tmp;

	if (!a)
		return (-1);
	tmp = a;
	while (tmp->next != NULL)
	{
		if (tmp->next->nbr < tmp->nbr)
			return (-1);
		tmp = tmp->next;
	}
	return (0);
}

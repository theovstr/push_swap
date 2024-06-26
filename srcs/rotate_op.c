/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:44:22 by theveste          #+#    #+#             */
/*   Updated: 2024/07/01 15:33:10 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * Should put the first element in the last position,
 * So, i need to copy the last element;
 * push the copied element in front of the list, and then remove the last element
*/

// void	ra(t_stack **a)
// {
// 	if (!*a || !((*a)->next))
// 		return ;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:54:58 by theveste          #+#    #+#             */
/*   Updated: 2024/06/26 16:24:51 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * Need to create the full list of the argument
 * Using the size of the array given by split
 * creating
 */

t_stack	*ft_lstlaste(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_stack	*ft_stack_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->nbr = content;
	new->next = NULL;
	return (new);
}

void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lstlaste(*stack))->next = stack_new;
}

t_stack	*list_creation(t_cnt *data)
{
	t_stack	*a;
	t_stack	*new;
	int		i;
	int		j;

	i = 0;
	if (data->multi_args == 1)
		i = 1;
	a = NULL;
	while (i < data->idx)
	{
		j = ft_atoi(data->list_of_number[i]);
		new = ft_stack_new(j);
		if (new == NULL)
			ft_free_list(&a);
		ft_add_back(&a, new);
		i++;
	}
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:33:37 by theveste          #+#    #+#             */
/*   Updated: 2024/06/25 10:22:53 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * Creating the structure
 */

void	ft_free_list(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->nbr = 0;
		free(*lst);
		*lst = tmp;
	}
}

int	main(int argc, char **argv)
{
	t_cnt	data;
	t_stack	*a;
	t_stack *tmp;
	args_checking(argc, argv, &data); // 0.1 live if no error
	a = list_creation(&data);
	tmp = a;
	while (tmp != NULL)
	{
		ft_printf("%d\n", tmp->nbr);
		tmp = tmp->next;
	}
	ft_free_list(&a);
	ft_printf("Ending is ok !");
	ft_free(data.list_of_number, data.list_size);
}
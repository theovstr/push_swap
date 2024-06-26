/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:33:37 by theveste          #+#    #+#             */
/*   Updated: 2024/07/01 15:32:58 by theveste         ###   ########.fr       */
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

/**
 * We have check all the arguments for validation
 * We checked the duplicate in the list
 * We created the list with all the number inside, and are ready to use it
*/

int	main(int argc, char **argv)
{
	t_cnt	data;
	t_stack	*a;
	t_stack	*tmp;

	args_checking(argc, argv, &data);
	a = list_creation(&data);
	if (data.multi_args == 0)
		ft_free(data.list_of_number, data.list_size);
	tmp = a;
	while (tmp != NULL)
	{
		ft_printf("old list : %d\n", tmp->nbr);
		tmp = tmp->next;
	}
	ft_free_list(&a);
	ft_printf("Ending is ok !");
}

// Mini test i did with the main !

	// sa(&a);
	// tmp = a;
	// while (tmp != NULL)
	// {
	// 	ft_printf("new list :%d\n", tmp->nbr);
	// 	tmp = tmp->next;
	// }
	// if (ft_check_sorted(a) == -1)
	// {
	// 	ft_printf("List is not sorted !\n");
	// 	ft_free_list(&a);
	// }
	// else
	// 	ft_printf("List is sorted !\n");
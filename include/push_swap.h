/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:18:26 by theveste          #+#    #+#             */
/*   Updated: 2024/06/25 10:36:15 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

typedef struct s_cnt
{
	char			**list_of_number;
	int				list_size;
	int				idx;
	t_stack			stack_a;
}					t_cnt;

void				args_checking(int argc, char **argv, t_cnt *data);
t_stack				*list_creation(t_cnt *data);
t_stack				*ft_lstlaste(t_stack *lst);
void				ft_free_list(t_stack **lst);

#endif
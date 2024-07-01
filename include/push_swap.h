/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:18:26 by theveste          #+#    #+#             */
/*   Updated: 2024/07/01 17:58:29 by theveste         ###   ########.fr       */
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
	int				multi_args;
	char			**list_of_number;
	int				list_size;
	int				idx;
	t_stack			stack_a;
}					t_cnt;

int					reel_zero(char *str);
int					ft_check_sorted(t_stack *a);
void				args_checking(int argc, char **argv, t_cnt *data);
t_stack				*list_creation(t_cnt *data);
t_stack				*ft_lstlaste(t_stack *lst);
void				ft_free_list(t_stack **lst);
int					list_is_valid(char *str, t_cnt *data);
int					list_is_valid_mulitple_arg(t_cnt *data);
void				double_in_list(t_cnt *data);
int					lenght_of_list(char **list);
int					only_number(char *str);
t_stack				*ft_stack_new(int content);
int					ft_lstsizze(t_stack *lst);
int					ft_min(t_stack *a);
int					ft_max(t_stack *a);
// operation
void				sa(t_stack **a);
void				sb(t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **stack_a, t_stack **stack_b);

#endif
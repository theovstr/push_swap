/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:53:39 by theveste          #+#    #+#             */
/*   Updated: 2024/07/01 15:19:09 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Wtf am i doing

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s2[j] == '-' && s1[i] == '-')
	{
		j++;
		i++;
	}
	if (s2[j] == '+')
		j++;
	if (s1[i] == '+')
		i++;
	while (s1[i] == '0')
		i++;
	while (s2[j] == '0')
		j++;
	while (s1[i] && s2[j] && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}

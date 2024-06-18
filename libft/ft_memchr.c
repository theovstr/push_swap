/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theveste <theveste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:07:49 by theveste          #+#    #+#             */
/*   Updated: 2023/11/15 15:23:23 by theveste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *memory, int searchedChar, size_t size)
{
	size_t		i;
	char		*mem;

	i = 0;
	mem = (char *)memory;
	while (i < size)
	{
		if (mem[i] == (char)searchedChar)
			return (&mem[i]);
		i++;
	}
	return (NULL);
}

/*
int main(int argc, char **argv)
{
	char bloc_mem[10] = {'a', 63, 70, 85, 78, 10, 5, 6, 58, 0};
	int i = 0;

	if (argc != 2)
	{
		printf("Veuillez rentrer une valeur a rechercher dans le bloc memoire !");
		return (0);
	}
	printf("On cherche a travers le bloc memoire contenant les valeurs : ");
	while (i < 10)
	{
		printf("%d ", bloc_mem[i]);
		i++;
	}
	i = 0;
	printf("\nIS %d FOUND ?\n", atoi(argv[1]));

	char *valeur = ft_memchr(bloc_mem, atoi(argv[1]), 10);
	if (valeur == NULL)	
	{
		printf("non !");
		return (1);
	}
	else
	{
		printf("oui la valeur %d est contenue a l'adresse %p", *valeur, valeur);
	}
}
*/
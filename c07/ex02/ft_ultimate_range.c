/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:15:16 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/28 12:08:15 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/
int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = 0;
	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ultimate_range;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ultimate_range = max - min;
	*range = ft_range(min, max);
	if (!range)
		return (-1);
	return (ultimate_range);
}
/*
int	main(void)
{
	int	*tab = NULL;
	int i;
	int	size;

	size = ft_ultimate_range(&tab, 0, 3);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		j++;
	}
	printf("\n");
	free(tab);
	return (0);
}*/
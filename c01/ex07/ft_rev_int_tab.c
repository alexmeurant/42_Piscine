/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:40:00 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/14 18:43:28 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/
void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int		i;
	int		tab[] = {9, 0, 2, 1, 6, 8, 5};

	i = 0;
	ft_rev_int_tab(tab, 7);
	while (i < 7)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/

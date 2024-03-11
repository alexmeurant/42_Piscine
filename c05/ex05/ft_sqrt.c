/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:30:02 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/22 18:51:01 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	float	min;
	float	max;
	float	moyenne;
	int		i;

	min = 0;
	max = 46340;
	moyenne = (min + max) / 2;
	if (nb < 0)
		return (0);
	i = 0;
	while (i < 100)
	{
		if ((int)moyenne * (int)moyenne == nb)
			return (moyenne);
		if (moyenne * moyenne > nb)
			max = moyenne;
		if (moyenne * moyenne < nb)
			min = moyenne;
		moyenne = (min + max) / 2;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("x = %d => %d\n", 0, ft_sqrt(0));
	printf("x = %d => %d\n", 49, ft_sqrt(49));
	printf("x = %d => %d\n", -100, ft_sqrt(-100));
	printf("x = %d => %d\n", -8, ft_sqrt(-8));
	printf("x = %d => %d\n", 9, ft_sqrt(9));
	printf("x = %d => %d\n", 121, ft_sqrt(121));
	printf("x = %d => %d\n", 16, ft_sqrt(16));
	printf("x = %d => %d\n", 0, ft_sqrt(0));
	printf("x = %d => %d\n", 1, ft_sqrt(1));
	printf("x = %d => %d\n", 100, ft_sqrt(100));
	printf("x = %d => %d\n", 26, ft_sqrt(26));
	printf("x = %d => %d\n", -1, ft_sqrt(-1));
	printf("x = %d (43846) => %d\n", 1922471716, ft_sqrt(1922471716));
	printf("x = %d (43640) => %d\n", 1904449600, ft_sqrt(1904449600));
}*/

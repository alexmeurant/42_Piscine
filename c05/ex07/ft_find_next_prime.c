/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:22:20 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/22 19:02:39 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;
	long	j;

	i = 46341;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	while (i * i > nb)
		i /= 2;
	i = i * 2;
	j = 3;
	while (j * j <= i * i)
	{
		if (nb % j == 0)
			return (0);
		j += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	i = 0;
	while (i < nb)
	{
		if (ft_is_prime(nb + i) == 1)
			return (nb + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		printf("%d => %d\n", i, ft_find_next_prime(i));
		i++;
	}
}*/

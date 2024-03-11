/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:13:21 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/23 08:39:51 by ameurant         ###   ########.fr       */
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

#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int i;

	i = 0;
	while (i < 200)
	{
		if (ft_is_prime(i) == 1)
			printf("%d\n", i);
		i++;
	}
	printf("%d\n", ft_is_prime(INT_MAX));
}

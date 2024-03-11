/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:30:07 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/13 19:22:39 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_sep(int i, int j)
{
	if (!((i == 98) && (j == 99)))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putchar(i / 10);
			ft_putchar(i % 10);
			write(1, " ", 1);
			ft_putchar(j / 10);
			ft_putchar(j % 10);
			ft_sep(i, j);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:17:07 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/18 10:11:22 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_putchar(char c);

/* Print the first or the last line*/
void	print_x(int x)
{
	ft_putchar('o');
	while (x > 2)
	{
		ft_putchar('-');
		x--;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

/* Print each line between the firt and the last lines */
void	print_stars_and_spaces(int x)
{
	ft_putchar('|');
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

/* Print all the lines */
void	rush(int x, int y)
{
	int	temp_x;

	temp_x = x;
	if (x > 0 && y > 0)
		print_x(temp_x);
	else if (x < 0)
		write(1, "Please, enter a positive value\n", 33);
	while (y > 2)
	{
		temp_x = x;
		print_stars_and_spaces(temp_x);
		y--;
	}
	if (y > 1)
		print_x(temp_x);
}

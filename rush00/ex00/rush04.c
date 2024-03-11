/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:31:30 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/18 10:13:28 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_putchar(char c);

/* Print the first line */
void	print_x(int x)
{
	ft_putchar('A');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

/* Print the last line */
void	print_rev_x(int x)
{
	ft_putchar('C');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
		ft_putchar('A');
}

/* Print each line between the firt and the last ones */
void	print_stars_and_spaces(int x)
{
	ft_putchar('B');
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
		ft_putchar('B');
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
		print_rev_x(temp_x);
}

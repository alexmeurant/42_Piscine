/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:40:46 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/18 10:10:12 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	print_x(int x);
extern void	print_rev_x(int x);
extern void	print_stars_and_spaces(int x);
extern void	rush(int x, int y);

int	main(void)
{
	rush(1, 1);
	return (0);
}

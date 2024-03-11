/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:36:36 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/06 19:01:30 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int	main(int ac, char **av)
{
	int	result;

	if (ac != 4)
		return (1);
	else
	{
		if (av[2][0] == '/' && av[3][0] == '0')
		{
			write(1, "Stop : division by zero\n", 24);
			return (1);
		}
		else if (av[2][0] == '%' && av[3][0] == '0')
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (1);
		}
		else
		{
			result = ft_operation(ft_atoi(av[1]), av[2], ft_atoi(av[3]));
			ft_putnbr(result);
		}
		write(1, "\n", 1);
	}
	return (0);
}

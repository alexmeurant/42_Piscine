/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:16:27 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/06 12:18:27 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int	ft_operation(int a, char *operator, int b)
{
	int	(*f[5])(int, int);

	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_div;
	f[3] = &ft_multi;
	f[4] = &ft_modulo;
	if ((operator[0] != '+' || operator[0] != '-' || operator[0] != '*'
			|| operator[0] != '/' || operator[0] != '%')
		&& (operator[1] != '\0'))
		return (0);
	else if (operator[0] == '+')
		return (f[0](a, b));
	else if (operator[0] == '-')
		return (f[1](a, b));
	else if (operator[0] == '/')
		return (f[2](a, b));
	else if (operator[0] == '*')
		return (f[3](a, b));
	else if (operator[0] == '%')
		return (f[4](a, b));
	return (0);
}

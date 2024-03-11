/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:50:34 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/20 12:02:14 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_dec_to_hex(unsigned char c)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	ft_putchar(hex_base[c / 16]);
	ft_putchar(hex_base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			c = str[i];
			ft_dec_to_hex(c);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr_non_printable(str);
	ft_putchar('\n');
	return (0);
}*/

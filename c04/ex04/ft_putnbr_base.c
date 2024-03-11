/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:20:14 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/26 09:21:02 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_baselen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_error_base(char *base, int base_len)
{
	int				i;
	int				j;

	if (base_len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;

	n = nbr;
	if (!base)
		return ;
	base_len = ft_baselen(base);
	if (ft_error_base(base, base_len) == 1)
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n >= base_len)
		{
			ft_putnbr_base(n / base_len, base);
			ft_putchar(base[n % base_len]);
		}
		else
			ft_putchar(base[n]);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(10, "01");
	return (0);
}*/
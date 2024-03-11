/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:36:04 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/26 11:24:00 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_index_of(unsigned char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
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
	int	i;
	int	j;

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

int	ft_get_number(char *str, int i, char *base, int base_len)
{
	int				sign;
	int				number;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)str;
	number = 0;
	sign = 1;
	while (c[i] != '\0' && (c[i] == ' ' || (c[i] >= 9 && c[i] <= 13)))
		i++;
	while (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			sign *= -1;
		i++;
	}
	while (c[i] >= base[0] && c[i] <= base[base_len - 1])
	{
		number = (number * base_len) + ft_index_of(c[i], base);
		i++;
	}
	return (sign * number);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	i;
	int	result;

	if (base == 0)
		return (0);
	i = 0;
	result = 0;
	base_len = ft_baselen(base);
	if (ft_error_base(base, base_len) == 1)
	{
		result = ft_get_number(str, i, base, base_len);
		return (result);
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "     ---+--+10ab567";
	char *base = "0123456789ABCDEF";
	int num;

	num = ft_atoi_base(str, base);
	printf("%d\n", num);
	return (0);
}*/
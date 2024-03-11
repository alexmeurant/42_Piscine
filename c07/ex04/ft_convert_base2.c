/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:17:22 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/05 20:37:24 by ameurant         ###   ########.fr       */
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
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
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
	while (ft_index_of(c[i], base) != -1)
	{
		number = (number * base_len) + ft_index_of(c[i], base);
		i++;
	}
	return (sign * number);
}

int	ft_atoi_base(char *str, char *base_from)
{
	int	base_from_len;
	int	i;
	int	result;

	if (base_from == 0)
		return (0);
	i = 0;
	result = 0;
	base_from_len = ft_strlen(base_from);
	if (ft_error_base(base_from, base_from_len) == 1)
	{
		result = ft_get_number(str, i, base_from, base_from_len);
		return (result);
	}
	return (0);
}

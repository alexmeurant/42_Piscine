/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:16:03 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/05 21:00:55 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_index_of(unsigned char c, char *base);
int	ft_strlen(char *str);
int	ft_error_base(char *base, int base_len);
int	ft_get_number(char *str, int i, char *base, int base_len);
int	ft_atoi_base(char *str, char *base);

int	ft_number_len(int number, int base_from_len)
{
	int	i;

	i = 0;
	if (number < 0)
	{
		number = -number;
		i++;
	}
	while (number > 0)
	{
		i++;
		number /= base_from_len;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

void	ft_concat_nbr(int nbr, char *base_to, int base_to_len, char *str)
{
	if (nbr < 0)
	{
		ft_strcat(str, "-");
		nbr *= -1;
	}
	if (nbr > base_to_len - 1)
	{
		ft_concat_nbr(nbr / base_to_len, base_to, base_to_len, str);
		ft_concat_nbr(nbr % base_to_len, base_to, base_to_len, str);
	}
	else
		ft_strncat(str, &base_to[nbr], 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		number;
	int		base_from_len;
	int		base_to_len;
	int		number_len;

	if (!nbr)
		return (0);
	base_from_len = ft_strlen(base_from);
	base_to_len = ft_strlen(base_to);
	if (!ft_error_base(base_from, base_from_len)
		|| !ft_error_base(base_to, base_to_len))
		return (0);
	number = ft_atoi_base(nbr, base_from);
	number_len = ft_number_len(number, base_to_len);
	str = malloc(sizeof(char) * (number_len + 1));
	if (str == NULL)
		return (0);
	ft_concat_nbr(number, base_to, base_to_len, str);
	return (str);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("Result: %s\n", ft_convert_base(av[1], av[2], av[3]));
	return (0);
} */

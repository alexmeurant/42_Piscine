/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:29:23 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/27 11:28:34 by ameurant         ###   ########.fr       */
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
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(int j, char **argv)
{
	char	*temp;

	temp = argv[j + 1];
	argv[j + 1] = argv[j];
	argv[j] = temp;
}
/*
int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc < 1)
		return (1);
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 1;
			while (j < argc - 1)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
					ft_swap(j, argv);
				j++;
			}
			i++;
		}
		i = 0;
		while (++i < argc)
			ft_putstr(argv[i]);
	}
	return (0);
}*/

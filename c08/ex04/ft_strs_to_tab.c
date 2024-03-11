/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:54:18 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/29 11:02:08 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*dup;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	dup = 0;
	src_len = ft_strlen(src);
	dup = malloc(sizeof(char) * (src_len + 1));
	if (!dup)
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		++i;
	}
	dup[i] = src[i];
	return (dup);
}

void	ft_free_all(t_stock_str	*strs_to_tab, int last_index)
{
	int	i;

	i = 0;
	while (i <= last_index)
	{
		free(strs_to_tab[i].copy);
		i++;
	}
	free(strs_to_tab);
	return ;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs_to_tab;
	int			i;

	strs_to_tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!strs_to_tab)
		return (0);
	i = 0;
	while (i < ac)
	{
		strs_to_tab[i].size = ft_strlen(av[i]);
		strs_to_tab[i].str = av[i];
		strs_to_tab[i].copy = ft_strdup(av[i]);
		if (!strs_to_tab[i].copy)
		{
			ft_free_all(strs_to_tab, i);
			return (0);
		}
		++i;
	}
	strs_to_tab[i].str = 0;
	return (strs_to_tab);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	t_stock_str	*stock_str;
	int	i = 0;

	stock_str = ft_strs_to_tab(ac, av);
	while (stock_str[i].str != 0)
	{
		printf("String : %s\n", stock_str[i].str);
		printf("Copy : %s\n", stock_str[i].copy);
		printf("Size : %d\n", stock_str[i].size);
		free(stock_str[i].copy);
		i++;
	}
	free(stock_str);
	return (0);
}*/
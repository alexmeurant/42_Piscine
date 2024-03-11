/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:18:02 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/06 16:48:25 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **tab1, char **tab2)
{
	char	*temp;

	temp = *tab1;
	*tab1 = *tab2;
	*tab2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j + 1])
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
	tab[i] = 0;
}

/* #include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * 4);
	tab[0] = "3";
	tab[1] = "2";
	tab[2] = "1";
	tab[3] = "0";
	ft_sort_string_tab(tab);
	while (i < 4)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
} */

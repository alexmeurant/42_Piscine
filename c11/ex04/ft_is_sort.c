/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:38:22 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/06 16:09:35 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	arranged;

	i = 0;
	arranged = 1;
	while (i < (length - 1) && arranged)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			arranged = 0;
		i++;
	}
	i = 0;
	if (arranged != 1)
	{
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}

/* #include <stdio.h>
int	ft_tabcmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab[5] = { 3, 2, 1, 0, 1};
	printf("%d\n", ft_is_sort(tab, 5, &ft_tabcmp));
	return (0);
} */
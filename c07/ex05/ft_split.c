/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:19:19 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/05 13:02:13 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_string_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_check_charset(str[i], charset) == 0)
		i++;
	return (i);
}

char	*ft_create_string(char *src, char *charset)
{
	char	*dup;
	int		word_len;
	int		i;

	word_len = ft_string_len(src, charset);
	dup = malloc(sizeof(char) * (word_len + 1));
	if (!dup)
		return (0);
	i = 0;
	while (i < word_len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_count_strings(char *str, char *charset)
{
	int	i;
	int	strings;

	i = 0;
	strings = 0;
	while (str[i])
	{
		while (str[i] && ft_check_charset(str[i], charset) == 1)
			i++;
		if (str[i])
			strings++;
		while (str[i] && ft_check_charset(str[i], charset) == 0)
			i++;
	}
	return (strings);
}

char	**ft_split(char *str, char *charset)
{
	char	**splits;
	int		count_strings;
	int		i;
	int		j;

	count_strings = ft_count_strings(str, charset);
	splits = malloc(sizeof(char *) * (count_strings + 1));
	if (!splits)
		return (0);
	i = 0;
	j = -1;
	while (str[i])
	{
		while (str[i] && ft_check_charset(str[i], charset) == 1)
			i++;
		if (str[i])
			splits[++j] = ft_create_string(str + i, charset);
		while (str[i] && ft_check_charset(str[i], charset) == 0)
			i++;
	}
	splits[++j] = 0;
	return (splits);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	int	i = 0;
	char	**splits;

	if (ac != 3)
		return (1);
	else
	{
		printf("%d\n", ft_count_strings(av[1], av[2]));
		splits = ft_split(av[1], av[2]);
		while (splits[i])
		{
			printf("%s\n", splits[i]);
			i++;
		}
	}
	
	free(splits);
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:13:21 by ameurant          #+#    #+#             */
/*   Updated: 2024/02/28 12:16:03 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*src = "Helle World!";

	printf("%s\n", ft_strdup(src));
	free(src);
	return (0);
}
*/
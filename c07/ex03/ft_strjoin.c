/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:06:03 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/06 16:42:26 by ameurant         ###   ########.fr       */
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

int	ft_full_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	full_strlen;
	int	sep_len;

	i = 0;
	full_strlen = 0;
	sep_len = ft_strlen(sep);
	while (i < size && strs[i])
	{
		full_strlen += ft_strlen(strs[i]);
		if (i < (size - 1) && strs[i + 1])
			full_strlen += sep_len;
		i++;
	}
	return (full_strlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	result = malloc(sizeof(char) * (ft_full_strlen(size, strs, sep) + 1));
	/* if (size < 1)
	{
		result[0] = '\0';
		return (result);
	}*/
	i = 0;
	result[0] = '\0';
	while (i < size && strs[i])
	{
		ft_strcat(result, strs[i]);
		if (i < (size - 1) && strs[i + 1])
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	char	*strs[6];
	char	*result;

		strs[0] = "Hello";
		strs[1] = "je";
		strs[2] = "suis";
		strs[3] = "a";
		strs[4] = "42";
		strs[5] = "!";
	
	result = ft_strjoin(0, strs, " ");
		printf("%s", result);
		free(result);
		return (0);
}
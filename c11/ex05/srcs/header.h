/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:03:15 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/06 10:40:00 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int		ft_add(int a, int b);
int		ft_div(int a, int b);
int		ft_modulo(int a, int b);
int		ft_multi(int a, int b);
int		ft_sub(int a, int b);
int		ft_atoi(char *str);
void	ft_putnbr(int num);
int		ft_operation(int a, char *operator, int b);

#endif
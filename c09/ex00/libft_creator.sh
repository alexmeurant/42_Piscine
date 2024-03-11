# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 15:54:48 by ameurant          #+#    #+#              #
#    Updated: 2024/03/03 08:50:45 by ameurant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Source files
files="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"

# Compiling .c files into .o object files
cc -Wall -Wextra -Werror -c $files

# Library creation
ar -rcs libft.a *.o

# Files cleaning
rm -f *.o


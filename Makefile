#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Debaz <klescaud@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/21 07:41:05 by Debaz             #+#    #+#              #
#    Updated: 2015/10/21 08:16:40 by Debaz            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = get_next_line

SRCS = get_next_line.c

INCLUDES = 	-I./libft/includes \
			-I./

all: $(NAME)

$(NAME):
	@echo "Compilation du fichier de test ..."
	@make -m ./libft/
	@gcc -o Testfile maingnl.c -L./libft -lft $(INCLUDES)
	@echo "Done !"

clean:
	@make fclean -m ./libft/


fclean: clean

re: fclean all
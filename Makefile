#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Debaz <klescaud@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/21 07:41:05 by Debaz             #+#    #+#              #
#    Updated: 2015/10/21 19:01:22 by Debaz            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = get_next_line

SRCS = get_next_line.c

INCLUDES = 	-I./libft/includes \
			-I./

all: $(NAME)

$(NAME):
	@echo "Compilation du fichier de test ..."
	@make -C ./libft/
	@gcc -o Testfile main.c get_next_line.c -L./libft -lft $(INCLUDES)
	@echo "Done !"

clean:
	@make fclean -C ./libft/

fclean: clean
	@echo "Supression du fichier de test ..."
	@rm Testfile
	@echo "Done !"

re: fclean all
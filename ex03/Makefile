# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 17:32:25 by gpinilla          #+#    #+#              #
#    Updated: 2024/10/27 16:05:03 by gpinilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Suprimir la salida de los comandos make
# MAKEFLAGS += --silent

################################################################################
### COLORS
################################################################################

DEL_LINE =		\033[2K
DEF_COLOR =		\033[0;39m
RED =			\033[0;91m
GREEN =			\033[0;92m
YELLOW =		\033[0;93m
BLUE =			\033[0;94m
MAGENTA =		\033[0;95m
CYAN =			\033[0;96m
BROWN =			\033[38;2;184;143;29m

################################################################################

# Variables
NAME            = Mage
CC              = c++
FLAGS           = -g -Wall -Werror -Wextra -std=c++98 -fsanitize=address 
RM              = rm -rf

# Directorios
DIR_OBJ         = temp/
DIR_DEPS        = deps/

# Archivos de cabecera y fuentes
HEADERS			= AMateria.hpp  Character.hpp  Ice.hpp  MateriaSource.hpp  Cure.hpp   ICharacter.hpp  IMateriaSource.hpp
SRC             = AMateria.cpp  Character.cpp  Ice.cpp  MateriaSource.cpp  Cure.cpp   main.cpp

# Objetos y dependencias
OBJ             = $(addprefix $(DIR_OBJ), $(SRC:.cpp=.o))
DEPS            = $(addprefix $(DIR_DEPS), $(SRC:.cpp=.d))

################################################################################
### RULES
################################################################################

all: $(DIR_OBJ) $(DIR_DEPS) $(NAME)
	@echo "$(GREEN)$(NAME) is up to date ✓$(DEF_COLOR)\n"

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

$(DIR_DEPS):
	@mkdir -p $(DIR_DEPS)

$(DIR_OBJ)%.o: %.cpp Makefile | $(DIR_OBJ) $(DIR_DEPS)
	@$(CC) $(FLAGS) -MMD -MP -c $< -o $@
	@mv $(DIR_OBJ)$*.d $(DIR_DEPS)
	@echo "${BLUE} ◎ $(BROWN)Compiling   ${MAGENTA}→   $(CYAN)$< $(DEF_COLOR)"

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ)  -o $(NAME)
	@echo "$(GREEN)Created $(NAME) ✓$(DEF_COLOR)\n"

clean:
	@$(RM) $(DIR_OBJ) $(DIR_DEPS)
	@echo "${RED}Objects and dependencies successfully removed${DEF_COLOR}"

fclean: clean
	@$(RM) $(NAME)
	@echo "${RED}Executables successfully removed${DEF_COLOR}"

re: fclean all

# Incluir archivos de dependencias generados
-include $(DEPS)

.PHONY: all clean fclean re
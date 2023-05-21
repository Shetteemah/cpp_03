NAME			= ScavTrap
CC				= c++
CFLAGS			= -Wall -Werror -Wextra -std=c++98
INCLUDE			= -I include

SRC_DIR			= src
OBJ_DIR			= obj
INC_DIR			= include

SOURCES			= $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS			= $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))

all:			$(NAME)

$(NAME):		$(OBJECTS)
				$(CC) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
				@mkdir -p $(@D)
				$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
				$(RM) -r $(OBJ_DIR)

fclean:			clean
				$(RM) -r $(OBJ_DIR) $(NAME)

re:				fclean all

.PHONY: all clean fclean re

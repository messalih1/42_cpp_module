NAME = claptrap

CC = c++

C_FILES = main.cpp  ClapTrap.cpp ScavTrap.cpp

C_FLAGS = -Wall -Wextra -Werror -std=c++98

O_FILES = $(C_FILES:.cpp=.o)


%.o: %.cpp ClapTrap.h ScavTrap.h
	@${CC} ${C_FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${O_FILES} ClapTrap.h ScavTrap.h
	@${CC} ${C_FLAGS} ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all
NAME = zombie

CC = c++
C_FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = Zombie.cpp  main.cpp zombieHorde.cpp

O_FILES = $(C_FILES:.cpp=.o)


%.o: %.cpp
	@${CC} ${C_FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${O_FILES}
	@${CC} ${C_FLAGS} ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all
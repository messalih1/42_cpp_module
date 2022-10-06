NAME = fixed

CC = c++

C_FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = main.cpp Fixed.cpp 

O_FILES = $(C_FILES:.cpp=.o)

%.o: %.cpp Fixed.h
	@${CC} ${C_FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${O_FILES} Fixed.h
	@${CC} ${C_FLAGS} ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all
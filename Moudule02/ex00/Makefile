NAME = fixed

CC = c++

C_FILES = Fixed.cpp main.cpp

O_FILES = $(C_FILES:.cpp=.o)

all: ${NAME}

${NAME}: ${O_FILES} 
	@${CC}  ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all
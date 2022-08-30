NAME = program


CC = c++

C_FILES = main.cpp  

O_FILES = $(C_FILES:.cpp=.o)


%.o: %.cpp
	@${CC}  -c $< -o $@

all: ${NAME}

${NAME}: ${O_FILES}
	@${CC}  ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all

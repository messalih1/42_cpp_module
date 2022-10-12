NAME = program

C_FILES = main.cpp base.cpp direved.cpp

O_FILES = $(C_FILES:.cpp=.o)

CC = c++

all : $(NAME)

%.o: %.cpp  base.h direved.h
	@${CC}  -c $< -o $@ 

all: ${NAME}

${NAME}: ${O_FILES} base.h direved.h
	@${CC}  ${O_FILES} -o $(NAME)

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all
NAME = program

C_FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp 
O_FILES = $(C_FILES:.cpp=.o)

CC = c++

all : $(NAME)

%.o: %.cpp  Animal.h Cat.h Dog.h  Brain.h
	@${CC}  -c $< -o $@ 

all: ${NAME}

${NAME}: ${O_FILES} Animal.h Cat.h Dog.h  Brain.h
	@${CC}  ${O_FILES} -o $(NAME)

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all
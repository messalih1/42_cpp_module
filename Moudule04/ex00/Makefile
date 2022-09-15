NAME = animal

C_FILES = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

O_FILES = $(C_FILES:.cpp=.o)

CC = c++

all : $(NAME)

%.o: %.cpp # without this, if remove in fclean wil remove cpp files
	@${CC}  -c $< -o $@ 

all: ${NAME}

${NAME}: ${O_FILES}
	@${CC}  ${O_FILES} -o $(NAME)

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all
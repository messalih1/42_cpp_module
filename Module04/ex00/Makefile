NAME = animal

CC = c++

C_FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp

C_FLAGS = -Wall -Wextra -Werror -std=c++98

O_FILES = $(C_FILES:.cpp=.o)

all : $(NAME)

%.o: %.cpp Animal.h Cat.h Dog.h WrongAnimal.h WrongCat.h
	@${CC} ${C_FLAGS} -c $< -o $@


${NAME}: ${O_FILES} Animal.h Cat.h Dog.h WrongCat.h WrongAnimal.h
	@${CC} ${C_FLAGS} ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all
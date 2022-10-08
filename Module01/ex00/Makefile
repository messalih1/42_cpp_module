NAME = zombie

CC = c++

C_FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

O_FILES = main.o Zombie.o newZombie.o randomChump.o

all : $(NAME)

${NAME}: ${O_FILES} 
	@${CC} ${C_FLAGS} ${O_FILES}  -o $(NAME)
	
clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all 
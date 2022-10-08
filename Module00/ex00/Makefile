NAME = megaphone

CC = c++

C_FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = megaphone.cpp 

O_FILES = megaphone.o

all : $(NAME)

${NAME}: ${O_FILES} 
	@${CC} ${C_FLAGS} ${O_FILES}  -o $(NAME)
	
clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all 
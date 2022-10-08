NAME = replace

CC = c++

C_FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = main.cpp 

O_FILES = main.o  

all : $(NAME)

${NAME}: ${O_FILES} 
	@${CC} ${C_FLAGS} ${O_FILES}  -o $(NAME)
	
clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all 
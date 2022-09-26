NAME = cast

C_FILES = main.cpp cast.cpp

O_FILES = main.o cast.o

CC = c++

all : $(NAME)

${NAME}: ${O_FILES} 
	@${CC}  ${O_FILES}  -o $(NAME)
	
clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all 
NAME = bureaucrat

C_FILES = main.cpp Bureaucrat.cpp

O_FILES = main.o Bureaucrat.o

CC = c++

all : $(NAME)

${NAME}: ${O_FILES} 
	@${CC}  ${O_FILES}  -o $(NAME)
	
clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all 
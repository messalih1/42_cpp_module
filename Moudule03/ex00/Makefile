NAME = claptrap

C_FILES = main.cpp ClapTrap.cpp ScavTrap.cpp

 
CC = c++
 
O_FILES = $(C_FILES:.cpp=.o)

# %.o: %.cpp the same of O_FILES = $(C_FILES:.cpp=.o)

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

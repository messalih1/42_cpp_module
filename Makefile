NAME = phonebook

CC = c++
# C_FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = contact.cpp main.cpp PhoneBook.cpp

O_FILES = $(C_FILES:.cpp=.o)


%.o: %.cpp
	@${CC}  -c $< -o $@

all: ${NAME}

${NAME}: ${O_FILES}
	@${CC} ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all
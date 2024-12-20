OBJ = \
		Zombie.o \
		main.o \

all: zombie

zombie: $(OBJ)
	c++ $^ -o $@

%.o: %.cpp
	c++ -std=c++98 -Wall -Werror -Wextra -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f zombie

re: fclean all

.PHONY: clean fclean re
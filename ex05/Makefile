OBJ = \
		main.o \
		Harl.o \

all: harl

harl: $(OBJ)
	c++ $^ -o $@

%.o: %.cpp
	c++ -std=c++98 -Wall -Werror -Wextra -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f harl

re: fclean all

.PHONY: clean fclean re
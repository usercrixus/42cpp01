OBJ = \
		main.o \

all: print_ptr

print_ptr: $(OBJ)
	c++ $^ -o $@

%.o: %.cpp
	c++ -std=c++98 -Wall -Werror -Wextra -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f print_ptr

re: fclean all

.PHONY: clean fclean re
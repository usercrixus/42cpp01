OBJ = \
		main.o \
		HumanA.o \
		HumanB.o \
		Weapon.o \

all: fighting

fighting: $(OBJ)
	c++ $^ -o $@

%.o: %.cpp
	c++ -std=c++98 -Wall -Werror -Wextra -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f fighting

re: fclean all

.PHONY: clean fclean re
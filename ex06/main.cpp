#include "Harl.h"

int	rank(std::string s)
{
	long unsigned int	i;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4)
	{
		if (s.compare(levels[i]) == 0)
			return (i);
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);

	std::string s = argv[1];
	Harl h;

	switch (rank(s))
	{
		case 0:
				h.complain("DEBUG");
				// fall through
		case 1:
				h.complain("INFO");
				// fall through
		case 2:
				h.complain("WARNING");
				// fall through
		case 3:
				h.complain("ERROR");
				break;
		default:
				std::cout << "You make a mistake in the level" << std::endl;
			break;
	}
	return 0;
}

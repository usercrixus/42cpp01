#include "Harl.h"

Harl::Harl()
{
    _type[0] = &Harl::debug;
    _type[1] = &Harl::info;
    _type[2] = &Harl::warning;
    _type[3] = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
}

void Harl::complain(std::string level)
{
	long unsigned int	i;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4)
	{
		if (level.compare(levels[i]) == 0)
		{
			(this->*_type[i])();
			break;
		}
		i++;
	}
}

#include "Zombie.h"

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}
void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *z = new Zombie;
	z->_name = name;
    return (z);
}

void Zombie::randomChump(std::string name)
{
	Zombie z;
	z._name = name;
	z.announce();
}

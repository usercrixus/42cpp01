#include "Zombie.h"

Zombie::Zombie()
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

Zombie *Zombie::zombieHorde(int N, std::string name)
{
	int	i;
	Zombie *z;
	
	z = new Zombie[N];
	i = 0;
	while (i < N)
	{
		z[i]._name = name;
		i++;
	}
    return z;
}

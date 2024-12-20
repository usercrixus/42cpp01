#include "Zombie.h"

int main()
{
	Zombie z;
	z.randomChump("Zob");
	Zombie *zz;
	zz = z.newZombie("Zib");
	zz->announce();
	delete zz;
	return 0;
}

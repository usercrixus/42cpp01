#include "Zombie.h"

int main()
{
	Zombie z;
	Zombie *horde;
	int	i;

	horde = z.zombieHorde(10, "Zub");
	i= 0;
	while (i < 10)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return 0;
}

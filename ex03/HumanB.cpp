#include "HumanB.h"

HumanB::HumanB(std::string name, Weapon &w) :
_w(&w),
_name(name)
{
}

HumanB::HumanB(std::string name) :
_name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &w)
{
	_w = &w;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _w->getType() << std::endl;
}

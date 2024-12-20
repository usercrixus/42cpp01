#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &w) :
_w(&w),
_name(name)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _w->getType() << std::endl;
}
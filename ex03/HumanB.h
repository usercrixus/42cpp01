#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB
{
private:
	Weapon *_w;
	std::string _name;
public:
	HumanB(std::string name, Weapon &w);
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &w);
	void attack();
};

#endif
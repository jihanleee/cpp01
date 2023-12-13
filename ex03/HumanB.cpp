#include <string>
#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void HumanB::attack() {
	if (_weapon == NULL) {
		std::cout << _name << " has no weapon\n";
		return ;
	}
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

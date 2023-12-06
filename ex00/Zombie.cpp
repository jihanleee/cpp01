#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name) {
	Zombie* newone = new Zombie(name);
	return (newone);
}

void announce ( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl
}

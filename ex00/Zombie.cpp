#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	_name = name;
	announce();
}

Zombie::~Zombie() {
	std::cout << "deleting " << _name << std::endl;
}

Zombie* newZombie(std::string name) {
	Zombie* newone = new Zombie(name);
	return (newone);
}

void randomChump( std::string name ) {
	Zombie newone(name);
}

void Zombie::announce ( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

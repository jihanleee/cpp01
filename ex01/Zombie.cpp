#include "Zombie.hpp"
Zombie::Zombie(){
}

Zombie::Zombie(std::string name) {
	_name = name;
	announce();
}

Zombie::~Zombie(void) {
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

void Zombie::setName(std::string name) {
	this->_name = name;
}

Zombie* zombieHorde(int N, std::string name) {
	Zombie* newHorde = new Zombie[N];
	int	i;

	for (i = 0; i < N; i++) {
		std::cout << i;
		newHorde[i].setName(name);
		newHorde[i].announce();
	}
	return (newHorde);
}

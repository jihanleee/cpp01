#include "Zombie.hpp"

int	main() {
	Zombie* heapZombie;
	Zombie stackZombie("stackzombie");

	heapZombie = newZombie("bigbruh");
	randomChump("randombruh");
	delete heapZombie;
	return (0);
}

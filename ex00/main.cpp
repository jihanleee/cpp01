#include "Zombie.hpp"

int	main() {
	Zombie* heapZombie;
	Zombie stackZombie("stackbruh");

	heapZombie = newZombie("heapbruh");
	randomChump("randombruh");
	delete heapZombie;
	return (0);
}

#include "Zombie.hpp"

int	main() {
	Zombie* heapZombie;
	Zombie stackZombie("stackbruh");
	Zombie* manyZombie;

	heapZombie = newZombie("heapbruh");
	randomChump("randombruh");
	manyZombie = zombieHorde(5, "manybruh");
	delete heapZombie;
	delete[] manyZombie;
	return (0);
}

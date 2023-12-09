#include <iostream>
#include <string>
#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;

	if (argc != 2)
		return (1);
	if (argc)
		harl.complain(argv[1]);
	return (0);
}

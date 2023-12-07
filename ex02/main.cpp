#include <iostream>
#include <string>

int	main() {
	/*normal variable*/
	std::string string = "HI THIS IS BRAIN";
	/*memory address of a variable*/
	std::string *stringPTR = &string;
	/*the variable reference is nothing but an alternate name for the already existing variable.*/
	std::string &stringREF = string;


	std::cout <<"The memory address of the string variable: " << &string << std::endl;
	std::cout <<"The memory address held by stringPTR: "<< stringPTR << std::endl;
	std::cout <<"The memory address held by stringREF: "<< &stringREF << std::endl;
	std::cout <<"The value of the string variable: " << string << std::endl;
	std::cout <<"The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout <<"The value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}

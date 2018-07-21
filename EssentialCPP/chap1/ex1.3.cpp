#include <iostream>
#include <string>

int my_main()
{
	std::string user_name;
	std::cout << "Plearn enter your firsr name: ";
	std::cin >> user_name;
	std::cout << "\n" << "Hello, " << user_name << " ... and goodbye !\n";

	return 0;
}

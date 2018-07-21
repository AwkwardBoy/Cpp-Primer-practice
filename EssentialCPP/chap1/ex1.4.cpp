#include <iostream>
#include <string>

int main()
{
	std::string user_name;
	std::string last_name;
	std::cout << "Please enter your firsr name: ";
	std::cin >> user_name;
	std::cout << "Please enter you last name: ";
	std::cin >> last_name;
	std::cout << "\n" << "Hello, " << user_name << " " << last_name << " ... and goodbye !\n";

	return 0;
}


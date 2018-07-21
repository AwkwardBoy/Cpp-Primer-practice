#include <iostream>
#include <string>
#include <cstring>
/*
int main()
{
	std::string user_name;
	std::cout << "Please input your name: ";
	std::cin >> user_name;
	if (user_name.size() <= 2)
		std::cerr << "invalid user_name, too short user name! \n";
	else
		std::cout << "Hello, " << user_name << std::endl;
	return 0;
}
*/

int main()
{
	char user_name[10];
	std::cout << "Please input your name: ";
	std::cin >> user_name;
	const char *up = user_name;
	
	if (strlen(user_name) <= 2)
		std::cerr << "invalid user_name, too short user name! \n";
	else
		std::cout << "Hello, " << user_name;

	return 0;
}


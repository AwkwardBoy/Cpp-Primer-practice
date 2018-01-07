#include <iostream>

int main() {
	int n1 = 0, n2 = 0;
	std::cin >> n1 >> n2;
	std::cout << "The number between in" << n1 << " and " << n2 << " exclusive is: " << std::endl;
	while (n1 < n2){
		++n1;
		std::cout << n1 << std::endl;
	}
	return 0;
}

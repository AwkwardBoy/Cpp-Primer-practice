#include <iostream>

int main() {
	int n1 = 0, n2 = 0;
	std::cin >> n1 >> n2;
	if (n1 < n2) {
		std::cout << "The numbers between " << n1 << " and " << n2 << " exclusive are " << std::endl;
		for (int start = n1+1 ; start < n2; ++start) 
			std::cout << start << std::endl;
	}
	else {
		std::cout << " The latter number must be larger than the former one" << std::endl; 
	}
	return 0;
}

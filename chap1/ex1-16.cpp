#include <iostream>

int main() {
	int sum = 0, num = 0;
	while (std::cin >> num) {
		sum += num;
	}
	std::cout << "The sum of your inputs is " << sum << std::endl;
	return 0;
}

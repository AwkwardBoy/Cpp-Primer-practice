#include <iostream>

int main() {
	int sum = 0;
	for (int val = 10; val >= 0; --val){
		sum += val;
	}
	std::cout << "The sum of 10 to 0 is " << sum << std::endl;
	return 0;
}

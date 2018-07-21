#include <iostream>

int main(){
	int n1 = 0, n2=0;
	std::cin >> n1 >> n2;
	std::cout << "The number between " << n1 << " and " << n2 << " exclusive are: " << std::endl;
	for (int val = n1+1 ; val < n2; ++val) {
		std::cout << val << std::endl;
	}
	return 0;
}

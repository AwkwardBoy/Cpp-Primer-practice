#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item Currbook, Midbook;
	if (std::cin >> Currbook) {
		int cnt = 1;
		while (std::cin >> Midbook) {
			if (Midbook.isbn() == Currbook) {
				++cnt;
			}
			else {
				std::cout << Currbook << " occurs " << cnt << " times " << std::endl;
				Currbook = Midbook;
				cnt = 1;
			}
		}
	}
}

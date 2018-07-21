#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item sum_book, book;
	if (std::cin >> sum_book) {
	
		while(std::cin >> book) {
			if (sum_book.isbn() == book.isbn()) {
				sum_book += book;
			}
			else {
				std::cout << sum_book << std::endl;
				sum_book = book;
			}
			sum_book += book;
		}
		std::cout << sum_book << std::endl;
	}
	else {
		std::cout << "There is no data input!" << std::endl;
	}
	return 0;

}


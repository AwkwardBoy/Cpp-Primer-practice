#include <iostream>
#include <string>
/* 
#include "Sales_data.h"

int main(){
	Sales_data data1, data2;
	double price = 0;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;

	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data2.bookNo) {
		unsigned tot_cnt = data1.units_sold + data2.units_sold;
		double tot_revenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << tot_cnt << " " << tot_revenue << " ";
		if (tot_cnt != 0) 
			std::cout<< tot_revenue / tot_cnt << std::endl;
		else 
			std::cout << "no sales" << std::endl;
		return 0;
	} else {
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}
*/
int main(){

//	std::string s("Hello World!!!");
//	for (auto &i : s)
//		i = std::toupper(i);
//	std::cout << s << std::endl;
	int grade = 59;
	std::string finalgrade = (grade < 60) ? "fail" : "pass";
	std::cout << finalgrade;
	return 0;
}


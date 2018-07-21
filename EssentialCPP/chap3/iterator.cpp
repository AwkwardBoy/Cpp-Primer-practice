#include <iostream>
#include <list>
#include <vector>
#include <string>
void show(const std::list<int> &);

int main()
{
	int arr1[] = {1, 1, 2, 3, 5, 8, 55, 89};
	int arr2[] = {8, 13, 21, 34};
	std::list<int> ilist(arr1, arr1+8);
	int ival;
	std::cout << "Please input the value to insert: ";
	ttd::cin >> ival;
	auto it = ilist.begin();
	for (; it != ilist.end(); ++it)
		if (*it >= ival){
			ilist.insert(it, 3, ival);
			break;
		}
		
	if (it == ilist.end())
		ilist.push_back(ival);
	
	show(ilist);
	return 0;
}

void show(const std::list<int> &ilist)
{	
	for (auto ix = ilist.begin(); ix != ilist.end(); ++ix)
		std::cout << *ix << " ";
}


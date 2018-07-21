#include <iostream>
#include <vector>


template <typename T1>
T1 Max(const T1& a, const T1& b)
{
	if (a >= b)
		return a;
	else return b;
}

template <typename T2>
T2 Max(const std::vector<T2> &a)
{	
	T2 max_item = a[0];
	for (auto ix: a)
	{
		if (ix > max_item)
			max_item = ix;
	}
	return max_item;
}


int main()
{	
	int a, b;
	std::cout << "Please input two number to compare: ";
	std::cin >> a >> b;
	std::cout << Max(a, b) << std::endl;
	std::string sarr[]={"we", "were", "her", "pride", "of", "ten"};
	std::vector<std::string> svec(sarr, sarr+6);
	std::cout << "\"" << Max(svec) << "\"" << " is the biggest!" << std::endl;

	return 0;
}

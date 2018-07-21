#include <iostream>
#include <vector>

const std::vector<int> *cal_pentagon(int);

int main()
{
	int size;
	std::cout << "Please input size of pentagon sequence: " << std::endl;
	std::cin >> size;
	const std::vector<int> *penta = cal_pentagon(size);
	for (int ix=0; ix < size; ix ++)
		std::cout << (*penta)[ix] << " ";
	return 0;
}

const std::vector<int> *cal_pentagon(int size)
{
	const int max_size = 64;
	static std::vector<int> penta;
	if (size <=0 || size > max_size)
	{
		std::cerr << "Invalid size, too big" << std::endl;
		return 0;
	}
	for (int ix=penta.size(); ix < size; ++ix)
	{
		if (ix==0 || ix==1)
			penta.push_back(1);
		else penta.push_back(ix*(3*ix-1)/2);
	}
	return &penta;
}

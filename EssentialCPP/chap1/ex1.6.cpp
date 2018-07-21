#include <iostream>
#include <vector>

int main()
{
	std::vector<int> arr2;
	int ival;
	while (std::cin >> ival)
		arr2.push_back(ival);
	int sum = 0;
	for (int ix=0; ix < arr2.size(); ++ix)
		sum += arr2[ix];

	int average = sum / arr2.size();

	std::cout << "The sum of " << arr2.size() << " elements: " << sum << std::endl;
	std::cout << "The average of " << arr2.size() << " elements: " << average << std::endl;

	return 0;

}


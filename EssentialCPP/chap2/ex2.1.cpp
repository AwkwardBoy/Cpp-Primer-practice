#include <iostream>
#include <cstdlib>
bool fibon_elem(int, int &);

int main()
{
	int pos, elem;
	std::cout << "Please enter a position: ";
	while (std::cin >> pos)
	{
		if (fibon_elem(pos, elem))
			std::cout << "element # " << pos << " is " << elem << std::endl;
		else
			std::cout << "Sorry, could not calculate element # " << pos << std::endl;
	}

}

bool fibon_elem(int pos, int &elem)
{
	if (pos <= 0 || pos > 1024)
	{
		elem = 0;
		return false;
	}
	elem = 1;
	int n_2 = 1, n_1 = 1;

	for (int ix=3; ix <= pos; ++ix)
	{
		elem = n_2 + n_1;
		n_2 = n_1;
		n_1 = elem;
	}
	return true;
}



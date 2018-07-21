#include <iostream>
#include <vector>
bool pentagon(int, std::vector<int> &);
void print_pentagon(const std::vector<int> &, const std::string &);

int main()
{
	int num;
	std::vector<int> vec;
	std::string s("Pentagon Sequence: ");
	std::cout << "Please input num of sequence: ";
	std::cin >> num;
	if (pentagon(num, vec))
		print_pentagon(vec, s);	
}

bool pentagon(int num, std::vector<int> &vec)
{	
	if (num <=0 || num >= 64)
		return false;
	else
	{
		for (int ix=1; ix <= num; ++ix)
			vec.push_back(ix * (3 * ix - 1) / 2);	
		return true;
	}
}

void print_pentagon(const std::vector<int> &vec, const std::string &title)
{
	std::cout << title << std::endl;
	for (int ix=0; ix < vec.size(); ++ix)
		std::cout << vec[ix] << " ";
}


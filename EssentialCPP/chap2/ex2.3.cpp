#include <iostream>
#include <vector>

bool pentagon(int, std::vector<int> &);
void print_pentagon(const std::vector<int> &, const std::string &);
void cal_pentagon(int, std::vector<int> &);


int main()
{
	int num;
	std::vector<int> vec;
	std::string s("Pentagon Sequence: ");
	std::cout << "Please input position: " << std::endl;
	std::cin >> num;
	if (pentagon(num, vec))
		print_pentagon(vec, s);


}

inline bool pentagon(int num, std::vector<int> &vec)
{
	if (num <= 0 || num >=64)
	{
		std::cerr << "Invalid position!" << std::endl;
		return false;
	}
	else 
	{
		cal_pentagon(num, vec);
		return true;
	}

	
}
void cal_pentagon(int pos, std::vector<int> &vec)
{
	for (int ix = 1; ix <= pos; ix++)
		vec.push_back(ix*(3*ix-1)/2);
}

void print_pentagon(const std::vector<int> &vec, const std::string &title)
{
	std::cout << title << std::endl;
	for (int i =0; i < vec.size(); ++i)
		std::cout << vec[i] << " ";
}



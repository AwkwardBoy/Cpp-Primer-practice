#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

int main()
{
	std::fstream infile("input.txt");
	std::ofstream outfile("output.txt");
	if (! infile)
		std::cout << "wrong open file" << std::endl;
	else
	{
		std::string str;
		std::vector<std::string> arr;
		while (infile >> str)
			arr.push_back(str);
		
		sort(arr.begin(), arr.end());
		
		for (int ix=0; ix < arr.size(); ++ix)
			outfile << arr[ix] << std::endl; 
	}

	return 0;
}


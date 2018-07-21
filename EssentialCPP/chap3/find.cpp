#include <iostream>

template <typename T>
const T* find(const T *array, int size, const T &value)
{
	if (!array || size < 1)
		return 0;
	
	for (int ix = 0; ix < size; ++ix)
	{
		if (array[ix] == value)
			return &array[ix];
	}
	
	return 0;

}

template <typename Type>
const Type* find(const Type *first, const Type *last, const Type &value)
{
	if (!first || !last)
		return 0;
	for ( ; first != last; ++first)
		if (*first == value)
			return first;
	return 0;
}

int main()
{
	int arr[] = {1, 2, 5, 20, 12};
	int value;
	std::cout << "please input the value: ";
	std::cin >> value;
	const int *result = find(arr, arr+5, value);
	std::cout << result << std::endl;
}




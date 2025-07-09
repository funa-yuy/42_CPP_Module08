#include "easyfind.hpp"

int main()
{

	std::cout << "------- intのベクタ- -------" << std::endl;
	int	arr[] = {1, 2, 3};
	std::vector<int> vec(arr, arr + 3);
	try {
		std::cout << *(easyfind<std::vector<int> >(vec, 1)) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "------- charのベクタ- -------" << std::endl;
	int	arr2[] = {'a', 'b', 'c', 'b', 'e'};
	std::vector<char> vec2(arr2, arr2 + 5);
	try {
		std::cout << *(easyfind<std::vector<char> >(vec2, 'c')) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------- ない -------" << std::endl;
	int	arr3[] = {1, 2, 3};
	std::vector<int> vec3(arr3, arr3 + 3);
	try {
		std::cout << *(easyfind<std::vector<int> >(vec3, 42)) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

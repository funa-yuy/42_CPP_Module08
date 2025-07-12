#include"Span.hpp"
#include <stdlib.h>

int main()
{
	std::cout << std::endl << "------- 格納数を超える -------" << std::endl;
	Span sp = Span(5);
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.addNumber(0);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	std::cout << std::endl << "------- 格納数が0 -------" << std::endl;
	Span sp2 = Span(0);
	try {
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << "------- 格納数が1 -------" << std::endl;
	Span sp3 = Span(1);
	try {
		sp3.addNumber(10);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << "------- 格納数が10000 -------" << std::endl;
	Span sp4 = Span(10000);
	try {
		srand(time(NULL)); // 乱数の種を設定
		for (int i = 0; i < 10000; i++) {
			sp4.addNumber(rand() % 100000); // 0から99999の範囲の乱数
		}
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << "------- 挿入位置を指定して、一気に追加 -------" << std::endl;
	Span sp5 = Span(5);
	try {
		sp5.addNumber(6);
		sp5.addNumber(3);

		int	arr[] = {1, 2, 3};
		std::vector<int> add_vec(arr, arr + 3);
		sp5.addNumber(0, add_vec);

		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

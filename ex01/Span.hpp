#ifndef SPAN_HPP
# define SPAN_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
#include <stdexcept>

// ------------------------------------------------
// class
// ------------------------------------------------

class Span {
	public:
		Span();
		Span(const unsigned int n);
		Span& operator=(const Span& copy);
		Span(const Span& copy);
		~Span();

		void addNumber(int value);
		void addNumber(int pos, const std::vector<int>& values);

		unsigned int	shortestSpan();
		unsigned int	longestSpan();

	private:
		std::vector<int>	_vec;
		unsigned int _maxSize;
};

// ------------------------------------------------
// function
// ------------------------------------------------

#endif

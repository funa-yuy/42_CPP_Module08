#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// ------------------------------------------------
// class
// ------------------------------------------------


// ------------------------------------------------
// function
// ------------------------------------------------

template<typename T>
typename T::iterator	easyfind(T arr, int num) {
	typename T::iterator result = std::find(arr.begin(), arr.end(), num);
	if (result == arr.end())
		throw std::runtime_error("なかったです");
	return (result);
};

#endif

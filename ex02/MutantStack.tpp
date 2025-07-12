#include"MutantStack.hpp"

/*
 * デフォルトコンストラクタ
 */
template<typename T>
MutantStack<T>::MutantStack() {}

/*
 * コピーコンストラクタ
 */
template<typename T>
MutantStack<T>::MutantStack(const MutantStack& copy) : std::stack<T>(copy) {}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& copy) {
	if (this != &copy)
		std::stack<T>::operator=(copy);
	return (*this);
}

/*
 * デストラクタ
 */
template<typename T>
MutantStack<T>::~MutantStack() {}


// ↑↑↑ Orthodox Canonical Form --------------------------------------


template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end() {
	return (this->c.end());
};

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin() {
	return (this->c.begin());
};

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const {
	return (this->c.end());
};

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const {
	return (this->c.begin());
};

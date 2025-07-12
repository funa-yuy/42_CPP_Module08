#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include <stack>

// ------------------------------------------------
// class
// ------------------------------------------------

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		MutantStack& operator=(const MutantStack& copy);
		MutantStack(const MutantStack& copy);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	end();
		iterator	begin();
		const_iterator	end() const;
		const_iterator	begin() const;
};

#include"MutantStack.tpp"

// ------------------------------------------------
// function
// ------------------------------------------------

#endif

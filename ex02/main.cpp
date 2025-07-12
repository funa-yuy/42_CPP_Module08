#include"MutantStack.hpp"
#include <iostream>

#include <list>

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);//新しい要素を末尾に追加
		mstack.push(17);

		std::cout << mstack.top() << std::endl;//最後の要素への参照

		mstack.pop();//最後の要素を削除

		std::cout << mstack.size() << std::endl;//要素数を取得

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);


		std::cout << std::endl << "------- const付きの場合 -------" << std::endl;

		MutantStack<int> tmp;
		for (size_t i = 0; i < 5; i++)
			tmp.push(i);
		const MutantStack<int> test(tmp);
		MutantStack<int>::const_iterator it2 = test.begin();
		MutantStack<int>::const_iterator ite2 = test.end();

		++it2;
		--it2;
		while (it2 != ite2)
		{
			std::cout << *it2 << std::endl;
			++it2;
		}
	}


	std::cout << std::endl << "-------MutantStackをstd::listに変更 -------" << std::endl;
	{
		std::list<int> mstack;

		mstack.push_back(5);//新しい要素を末尾に追加
		mstack.push_back(17);

		std::cout << mstack.front() << std::endl;//最後の要素への参照

		mstack.pop_back();//最後の要素を削除

		std::cout << mstack.size() << std::endl;//要素数を取得

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);


		std::cout << std::endl << "------- const付きの場合 -------" << std::endl;

		std::list<int> tmp;
		for (size_t i = 0; i < 5; i++)
			tmp.push_back(i);
		const std::list<int> test(tmp);
		std::list<int>::const_iterator it2 = test.begin();
		std::list<int>::const_iterator ite2 = test.end();

		++it2;
		--it2;
		while (it2 != ite2)
		{
			std::cout << *it2 << std::endl;
			++it2;
		}
	}

	return 0;
}

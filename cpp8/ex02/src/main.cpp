
#include "../include/MutantStack.hpp"

int main()
{
	MutantStack<int> s1;

	if (s1.empty())
		std::cout << "la stack est vide\n";

	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);

	std::cout << s1.top() << std::endl;
	std::cout << s1.size() << std::endl;

	s1.pop();
	std::cout << "after pop\n";
	std::cout << s1.top() << std::endl;
	std::cout << s1.size() << std::endl;

	MutantStack<int>::iterator it = s1.begin();
	MutantStack<int>::iterator ite = s1.end();

	std::cout << &it << std::endl;
	std::cout << &ite << std::endl;

	for (; it != ite; it++)
		std::cout << *it << std::endl;

	MutantStack<int> s2;

	s2 = s1;
	
	if (s2 == s1)
		std::cout << "c'est une copie\n";

	MutantStack<int>::iterator it1 = s2.begin();
	MutantStack<int>::iterator ite1 = s2.end();


	std::cout << "copy : \n";
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}

	MutantStack<int> s3(s2);

	MutantStack<int>::iterator it2 = s3.begin();
	MutantStack<int>::iterator ite2 = s3.end();

	std::cout << "copy 2 : \n";
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
}

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }
#include "MutantStack.hpp"

int main() {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "mstack:";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;

	MutantStack<int> cstack(mstack);
	cstack.pop();
	cstack.push(666);

	std::cout << "cstack:";
	for (MutantStack<int>::iterator it = cstack.begin(); it != cstack.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;

	std::cout << "mstack:";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;

	std::stack<int> s(mstack);
}

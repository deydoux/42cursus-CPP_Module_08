#include <iostream>
#include <vector>
#include "easyfind.tpp"

int main() {
	std::vector<int> vec;

	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(8);
	vec.push_back(13);
	vec.push_back(21);
	vec.push_back(34);
	vec.push_back(55);

	std::cout << *easyfind(vec, 2) << std::endl;
	std::cout << *++easyfind(vec, 2) << std::endl;

	try {
		easyfind(vec, 9);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

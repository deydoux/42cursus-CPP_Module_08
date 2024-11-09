#include "easyfind.hpp"
#include <iostream>

template <typename T>
typename T::iterator easyfind(T container, int value) {
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw (std::invalid_argument("Value not found in container"));
	return (it);
}

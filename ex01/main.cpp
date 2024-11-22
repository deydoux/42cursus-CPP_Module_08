#include "Span.hpp"

int main() {
	std::vector<int> vec;
	vec.push_back(6);
	vec.push_back(3);
	vec.push_back(17);
	vec.push_back(9);
	vec.push_back(11);
	vec.push_back(15);

	Span span(5);
	try {
		span.addNumbers(vec.begin(), vec.end());
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "span: " << span.shortestSpan() << " " << span.longestSpan() << std::endl << std::endl;

	Span spanCopy(3);
	spanCopy.addNumber(1);

	try {
		spanCopy.shortestSpan();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		spanCopy.longestSpan();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	spanCopy.addNumber(2);
	std::cout << "spanCopy: " << spanCopy.shortestSpan() << " " << spanCopy.longestSpan() << std::endl << std::endl;

	span = spanCopy;
	std::cout << "span: " << span.shortestSpan() << " " << span.longestSpan() << std::endl << std::endl;

	spanCopy.addNumber(2);
	std::cout << "spanCopy: " << spanCopy.shortestSpan() << " " << spanCopy.longestSpan() << std::endl;
	std::cout << "span: " << span.shortestSpan() << " " << span.longestSpan() << std::endl << std::endl;
}

#include "Span.hpp"

int main() {
	Span span(5);
	try {
		span.addNumbers((int[]){6, 3, 17, 9, 11, 15}, 6);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	span.addNumbers((int[]){6, 3, 17, 9, 11}, 5);
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

	Span large(100000);
	std::srand(time(NULL));
	for (unsigned int i = 0; i < 100000; i++)
		large.addNumber(std::rand());
}

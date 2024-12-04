#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span {
private:
	std::vector<int> _vec;
	unsigned int _length;
	unsigned int _size;
public:
	Span();
	Span(const unsigned int &size);
	Span(const Span &other);
	~Span();
	Span &operator=(const Span &rhs);
	void addNumber(const int &n);
	void addNumbers(int tab[], unsigned int size);
	int shortestSpan() const;
	int longestSpan() const;
};

#endif

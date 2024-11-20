#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span {
private:
	std::vector<int> _array;
	unsigned int _length;
	unsigned int _size;
public:
	Span();
	Span(const unsigned int &size);
	Span(const Span &other);
	~Span();
	Span &operator=(const Span &rhs);
	void addNumber(const int &n);
	void addNumbers(const std::vector<int> &numbers);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
};

#endif

#include "Span.hpp"

Span::Span(): _array(), _size(0), _length(0) {
	std::cerr << "Default Span constructor called" << std::endl;
}

Span::Span(const unsigned int &size): _array(), _size(size), _length(0) {
	std::cerr << "Parametric Span constructor called" << std::endl;
}

Span::Span(const Span &other) {
	std::cerr << "Span copy constructor called" << std::endl;
}

Span::~Span() {
	std::cerr << "Span destructor called" << std::endl;
}

Span &Span::operator=(const Span &rhs) {
	std::cerr << "Span copy assignement operator called" << std::endl;
	_array = rhs._array;
	_size = rhs._size;
	_length = rhs._length;
	return (*this);
}

void Span::addNumber(const int &n) {
	if (_length >= _size)
		throw (std::length_error("Array is full"));
	_array.push_back(n);
	std::sort(_array.begin(), _array.end());
	_length++;
}

unsigned int Span::shortestSpan() const {
	if (_length < 2)
		throw (std::range_error("Not enough elements in array"));
	unsigned int span = _array[1] - _array[0];
	for (unsigned int i = 2; i < _length; i++)
		if (span > _array[i] - _array[i - 1])
			span = _array[i] - _array[i - 1];
	return (span);
}

unsigned int Span::longestSpan() const {
	if (_length < 2)
		throw (std::range_error("Not enough elements in array"));
	return (*std::max_element(_array.begin(), _array.end()) - *std::min_element(_array.begin(), _array.end()));
}

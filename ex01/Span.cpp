#include "Span.hpp"

Span::Span(): _vec(), _length(0), _size(0) {
	std::cerr << "Default Span constructor called" << std::endl;
}

Span::Span(const unsigned int &size): _vec(), _length(0), _size(size) {
	std::cerr << "Parametric Span constructor called" << std::endl;
}

Span::Span(const Span &other): _vec(other._vec), _length(other._length), _size(other._size) {
	std::cerr << "Span copy constructor called" << std::endl;
}

Span::~Span() {
	std::cerr << "Span destructor called" << std::endl;
}

Span &Span::operator=(const Span &rhs) {
	std::cerr << "Span copy assignement operator called" << std::endl;
	_vec = rhs._vec;
	_size = rhs._size;
	_length = rhs._length;
	return (*this);
}

void Span::addNumber(const int &n) {
	if (_length >= _size)
		throw (std::length_error("Span is full"));
	_vec.push_back(n);
	std::sort(_vec.begin(), _vec.end());
	_length++;
}

void Span::addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	while (first != last)
		addNumber(*first++);
}

int Span::shortestSpan() const {
	if (_length < 2)
		throw (std::range_error("Not enough elements in span"));
	int span = _vec[1] - _vec[0];
	for (unsigned int i = 2; i < _length; i++)
		if (span > _vec[i] - _vec[i - 1])
			span = _vec[i] - _vec[i - 1];
	return (span);
}

int Span::longestSpan() const {
	if (_length < 2)
		throw (std::range_error("Not enough elements in span"));
	return (*std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end()));
}

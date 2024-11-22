#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {
	std::cerr << "Default MutantStack constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other): std::stack<T>::stack(other) {
	std::cerr << "MutantStack copy constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	std::cerr << "MutantStack destructor called" << std::endl;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &rhs) {
	std::cerr << "MutantStack copy assignement operator called" << std::endl;
	std::stack<T>::operator=(rhs);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return (std::stack<T>::c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
	return (std::stack<T>::c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
	return (std::stack<T>::c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
	return (std::stack<T>::c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const {
	return (std::stack<T>::c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const {
	return (std::stack<T>::c.rend());
}

#endif

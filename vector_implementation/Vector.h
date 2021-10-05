#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <stdexcept>

template<typename T>
class Hector
{
public:
	Hector();
	Hector(int);
	Hector(const T&);
	Hector(const Hector&);
	~Hector();
public:
	void push_back(const T&);
	void pop_back();
	void erase(int);
	const T& at(int);
	Hector& operator=(const Hector&);
	*T operator[](int);
	int get_size();
	int get_capacity();
	void print_out();
	void check_size&capacity()
private:
	int m_capacity;
	int m_size;
	*T m_arr;
};

#include "Vector.tpp"
#endif // VECTOR_H

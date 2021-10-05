#pragma once

#include "VECTOR.H"

template<typename T>
class Stack :private Hector<T>
{
public:
	void push(const T& elem)
	{
		Hector<T>::push_back(elem);
	}
	void pop()
	{
		Hector<T>::pop_back();
	}
};

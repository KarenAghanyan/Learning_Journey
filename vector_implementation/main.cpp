#include <iostream>
#include "Vector.h"

int main()
{
	Hector<int> a;
	std::cout << a.get_size() << std::endl;
	std::cout << a.get_capacity() << std::endl;
	a.push_back(20);
	a.push_back(22);
	std::cout << a.get_size() << std::endl;
	std::cout << a.get_capacity() << std::endl;
	a.print_out();

		return 0;
}
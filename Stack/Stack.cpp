#include "Stack.h"
    
My_stack::stack::stack(int N)
{
    this ->size_of_stack = N;
	num_of_elem = 0;
	elem = new std::string[N];
}

std::string* My_stack::stack::Front()
{
	if (num_of_elem == 0)
		throw std::invalid_argument("No elements in stack");

	return (elem + num_of_elem - 1);

}

void My_stack::stack::Push(std::string input)
{
	if (num_of_elem == size_of_stack)
		throw std::invalid_argument("No free space in stack");

	num_of_elem++;
	elem[num_of_elem - 1] = std::move(input);
}

void My_stack::stack::Pop()
{
	if (num_of_elem != 0)
	{
		num_of_elem--;
	}
}

int My_stack::stack::ContainedNumber()
{
    return num_of_elem;
}

My_stack::stack::~stack()
{
	delete[] elem;
}

int My_stack::stack::Size()
{
    return size_of_stack;
}

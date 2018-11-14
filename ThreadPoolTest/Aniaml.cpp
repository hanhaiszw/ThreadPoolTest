#include "stdafx.h"
#include "Aniaml.h"
#include <iostream>

Animal::Animal(int a)
{
	this -> a = a;
}


Animal::~Animal()
{
}

void Animal::print(int b)
{
	std::cout << a+b << std::endl;
}

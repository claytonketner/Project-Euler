// Clayton Salinger Ketner
// Project Euler -- Problem 11

#include <iostream>
#include "P11.h"

int main(int argc, char* argv[])
{
	P11* problem11 = new P11();
	problem11->loadFile();
	std::cout << "Largest product: " << problem11->solve() << "\n";
}
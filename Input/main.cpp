// main.cpp : input main
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	double input{};
	// Read user input from std::cin with a prompt for a number "Enter a number: ".
	std::cout << "Enter a number: " << std::endl;
	std::cin >> input;
	// Display the number back to std::cout with the format in scientific notation.
	std::cout << std::scientific << input << std::endl;

    return 0;
}


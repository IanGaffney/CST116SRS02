// main.cpp : Output main
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
/*	Format the following sales information using C++ stream manipulators.

		West: $ 36, 364.87
		Midwest : $ 12, 431.33
		East : $127, 690.50
		South : $  9, 200.00

		Right align the labels and colons and align the $’s using i / o
		manipulators. Place value punctuation according to the U.S. 
		convention of 3 digits per group separated by commas with decimal
		point for dollar / cent separator. Show 2 digits to the right of
		the decimal point even when there are not fractions of a dollar in
		the data. */

	double westAmount{ 36364.87 };
	double midwestAmount{ 12431.33 };
	double eastAmount{ 127690.50 };
	double southAmount{ 9200.00 };

	std::cout.precision(2);
	std::cout.setf(std::ios::right);
	std::cout.setf(std::ios::showpoint);
	std::cout.setf(std::ios::fixed);
	std::cout.imbue(std::locale("en-US"));
	std::cout << std::setw(10) << "West: $" << std::setw(10) << westAmount << std::endl;
	std::cout << std::setw(10) << "Midwest: $" << std::setw(10) << midwestAmount << std::endl;
	std::cout << std::setw(10) << "East: $" << std::setw(10) << eastAmount << std::endl;
	std::cout << std::setw(10) << "South: $" << std::setw(10) << southAmount << std::endl;

    return 0;
}


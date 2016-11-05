#include "stdafx.h"
#include <iostream>

int getValueFromUser() {
	int a;
	std::cout << "Enter a number: ";
	std::cin >> a;
	return a;
}

int main()
{
	int x = getValueFromUser();
	int y = getValueFromUser();
	std::cout << x << " + " << y << " = " << x + y << std::endl;
    return 0;
}


// chapter2_Quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int askUser() 
{
	std::cout << "Enter the height of the tower: ";
	int initial_height;
	std::cin >> initial_height;
	return initial_height;
}

int distanceFallen(int seconds, int initial_height)
{
	int height;
	height = initial_height - (gravity * (seconds * seconds) / 2);
	if (height < 0)
		height = 0;
	return height;
}

int main()
{
	int initial_height = askUser();
	std::cout << "At 0 seconds, the ball is at height: " << distanceFallen(0, initial_height) << std::endl;
	std::cout << "At 1 seconds, the ball is at height: " << distanceFallen(1, initial_height) << std::endl;
	std::cout << "At 2 seconds, the ball is at height: " << distanceFallen(2, initial_height) << std::endl;
	std::cout << "At 3 seconds, the ball is at height: " << distanceFallen(3, initial_height) << std::endl;
	std::cout << "At 4 seconds, the ball is at height: " << distanceFallen(4, initial_height) << std::endl;
	return 0;
}


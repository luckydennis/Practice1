// Practice1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//int factorial(int n)
//{
//	if (n < 0)
//	{
//		return -1;
//	}
//	else if (n == 0)
//	{
//		return 1;
//	}
//	else
//		return n * factorial(n - 1);
//}
	int fib(int n)
	{
		if (n <= 0)
			return 0;
		else if (n == 1)
			return 1;
		return fib(n - 1) + fib(n - 2);

	}
void allFib(int n)
{
	for (int i = 0; i < n; i++)
	{
			std::cout << i << ": " << fib(i);
	}
}


int main()
	
{
    std::cout << "Hello World!\n"; 
	//std::cout<<factorial(5);
	allFib(5);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>



int sumOfDigits(int input)
{
	if (input < 1)
		return 0;
	else
	{
		return input % 10 + sumOfDigits(input / 10);
	}

	


}




int main()
{
	int input = 12345;

	std::cout << sumOfDigits(input);

	std::cin.get();

}

#include <iostream>

void ex1()
{
	int values[] = { 2,6,10,14 };
	for (int i =0;i<3;++i)
	{
		std::cout << values[i] << std::endl;
		system("pause");
	}
}

void ex2()
{
	//question 2
	int x = 2;
	int values[] = { 2,6,10,14 };
	std::cout << values[2];
	std::cout << ++values[0];
	std::cout << values[1]++;
	std::cout << values[++x];
	std::cout << values[4];
	system("pause");







}

void ex3()
{
	//question 3
	for (int i = 10; i > 0; i--)
	{
		printf("%i", i);
		system("pause");
	}
}

void ex4()
{
	int quit = 911;
	const int size = 5;
	int num[size];
	int input = 0;
	while (input != quit)
	{
		std::cout << "pick a number: ";
		for (int i = 0 - 1; i < 5; ++i)
		{
			std::cin >> input;
			num[i] = input;
			std::cout << "enter number:" << num[i] << std::endl;
		}
			std::cout << "the num entered was: " << std::endl;
			for (int i = size-1; i >= 0; --i)
			{
				std::cout << num[i] << std::endl;
			}
		
		
		


	}



}

void ex5()
{

}

int main()
{
	//ex1();
	//ex2();
	//ex3();
	//ex4();
	ex5();
}
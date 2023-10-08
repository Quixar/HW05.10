#include <iostream>
using namespace std;


void task1()
{
	static int k = 0;
	k++;
	cout << k << "\n";
	if (k < 5)
	{
		task1();
	}
}

void task2()
{
	static int a = 1;
	static int b = 5;
	cout << a << "\n";
	if (a > b)
	{
		a--;
		task2();
	}
	else if (a < b)
	{
		a++;
		task2();
	}
}

bool task3(int number)
{
	if (number == 1)
	{
		return true;
	}
	else if (number % 2 || number == 0)
	{
		return false;
	}
	task3(number / 2);
}

int task4(int number) 
{
	if (number == 0)
	{
		return 0;
	}
	else
	{
		number = number % 10 + task4(number / 10);
		return number;
	}
}

int task5(int number)
{
	if (number == 0)
	{
		return 0;
	}
	else
	{
		int x = number % 10;
		cout << x << " ";
		number /= 10;
		task5(number);
		return number;
	}
}


int task6(int number)
{
	if (number == 0)
	{
		return 0;
	}
	else
	{
		int x = number % 10; 
		number /= 10;
		task6(number);
		cout << x << " ";
		return number;
	}
}

int main() 
{
	task1();
	task2();
	int number;
	cout << "Enter number: ";
	cin >> number;
	cout << "\n";
	task3(number);
	if (number <= 0)
	{
		cout << "no";
	}
	else if (task3(number))
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
	/*int result = task4(number);
	cout << result;*/
	//task5(number);
	//task6(number);
}








/* Problem #1: Print Range
Given a starting number X and an ending number Y, print all numbers 
between X and Y inclusive, each on a line  */
#include <iostream>
using namespace std;
int main()
{
	int Snum, Enum;
	cout << "Enter Starting number and Ending number respectively : ";
	cin >> Snum >> Enum;
	cout << "\n";
	if (Snum < Enum) 
	{
		cout << "The numbers between these numbers are as follow : " << "\n";
		for (int i = Snum + 1; i < Enum; i++)
		{
			cout << " " << i << "\n";
		}
	}
	else if (Snum > Enum) 
	{
		cout << "The numbers between these numbers are as follow : " << "\n";
		for (int i = Snum -1; i > Enum; i--)
		{
			cout << " " << i << "\n";
		}
	}
	else 
	{
		cout << "The two numbers are the same so there is no integer numbers between them.";
	}
	cout << "\n\n\n\n";
}


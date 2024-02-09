/*
Given 3 integers, sort (order) them in ascending order, then print them out
*/

#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "Enter three integers : ";
	cin >> num1 >> num2 >> num3;
	cout << "The ascending order of them is as follow : ";
	if (num1 < num2) 
	{
		if (num1 < num3)
		{
			cout << num1 << " ";
			if (num2 < num3) 
			{
				cout << num2 << " " << num3;
			}
			else 
			{
				cout << num3 << " " << num2;
			}
		}
		else 
		{
			cout << num3 << " " << num1 << " " << num2;
		}
	}
	else if (num2 < num3) 
	{
		cout << num2 << " ";
		if (num1 < num3) 
		{
			cout << num1 << " " << num3;
		}
		else 
		{
			cout << num3 << " " << num1;
		}
	}
	else 
	{
		cout << num3 << " " << num2 << " " << num1;
	}
	cout << "\n\n\n";
}


/*
Read an integer N (2 <= N <= 10)
Then read in N integers. Find which one of them has the biggest value, and 
print it
*/
#include <iostream>
using namespace std;
int main()
{
	int N, num;
	cout << "Enter a number between 2 and 10 : ";
	cin >> N;
	int biggest; // assume num1 = biggest
	cout << "num1 : ";
	cin >> biggest;
	N -= 1;
	if (N > 0) 
	{
		N -= 1;
		cout << "num2 : ";
		cin >> num;
		if (biggest < num)
			biggest = num;
	}
	if (N > 0)
	{
		N -= 1;
		cout << "num3 : ";
		cin >> num;
		if (biggest < num)
			biggest = num;
	}
	if (N > 0)
	{
		N -= 1;
		cout << "num4 : ";
		cin >> num;
		if (biggest < num)
			biggest = num;
	}
	if (N > 0)
	{
		N -= 1;
		cout << "num5 : ";
		cin >> num;
		if (biggest < num)
			biggest = num;
	}
	if (N > 0)
	{
		N -= 1;
		cout << "num6 : ";
		cin >> num;
		if (biggest < num)
			biggest = num;
	}
	if (N > 0)
	{
		N -= 1;
		cout << "num7 : ";
		cin >> num;
		if (biggest < num)
			biggest = num;
	}
	if (N > 0)
	{
		N -= 1;
		cout << "num8 : ";
		cin >> num;
		if (biggest < num)
			biggest = num;
	}
	if (N > 0)
	{
		N -= 1;
		cout << "num9 : ";
		cin >> num;
		if (biggest < num)
			biggest = num;
	}
	if (N > 0)
	{
		N -= 1;
		cout << "num10 : ";
		cin >> num;
		if (biggest < num)
			biggest = num;
	}
	cout << "The biggest number of them is : " << biggest << "\n\n\n";
	
}

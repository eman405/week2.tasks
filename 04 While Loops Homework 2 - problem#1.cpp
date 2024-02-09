/*
Problem #1: Print Diamond
Read in a positive integer N, then print a diamond of 2N rows, as below:
*/
#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout << "Enter number of rows you want : ";
	cin >> rows;
	for (int i = 1 ; i <= rows ; i++) 
	{
		for (int k = 1; k <= rows - i; k++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2*i-1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 1; i <=rows; i++) 
	{
		for (int k = 1;k <= i - 1;k++) 
		{
			cout << " ";
		}
		for (int j = 1;j <= -2*i+13;j++) 
		{
			cout << "*";
		}
		cout << "\n";
	}
}


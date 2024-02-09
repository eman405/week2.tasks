/*
Problem #3: Print left angled triangle
Read integer N, then print a left angled triangle that has N rows as below:
*/
#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout << "Enter the number of rows of triangle : ";
	cin >> rows;
	cout << "\n";
	for (int i = 1; i <= rows; i++) 
	{
		for (int j = 1; j <= i; j++) 
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n\n\n";
}


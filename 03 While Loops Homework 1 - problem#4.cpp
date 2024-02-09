/*
Problem #4 : Print face down left angled triangle
Read integer N, then print a face down left angled triangle that has N rows
*/
#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout << "Enter the number of rows of the triangle : ";
	cin >> rows;
	cout << "\n";
	for (int i = 1; i <= rows; i++) 
	{
		for (int j = i; j <= rows; j++) 
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n\n\n";
}


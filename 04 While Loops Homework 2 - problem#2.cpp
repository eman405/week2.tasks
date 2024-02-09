/*
Problem #2: Special Multiples 1
● Read in a positive integer N, and print all integers from 0-N that satisfy the 
following properties:
○ Either the number is perfectly divisible by 8
○ Or it is divisible by both 3 and 4 
*/
#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter any integer number : ";
	cin >> N;
	cout << "\nThe numbers that are divisible by 8 _or_ by 3 and 4 are as follow : \n";
	for (int i = 0; i < N; i++) 
	{
		if (i % 8 == 0 || (i % 3 == 0 && i % 4 == 0)) 
		{
			cout << i << " ";
		}
	}
	cout << "\n\n\n\n";
}


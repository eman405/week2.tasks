/*
Problem #5: Special Average
● Read integer N, followed by reading N numbers. Print 2 values
○ The average of the numbers in odd positions (1st, 3rd, 5th, …)
○ The average of the numbers in even positions (2nd, 4th, 6th, …)
*/
#include <iostream>
using namespace std;
int main()
{
	int Num, num, sumodd = 0, sumeven = 0, avgodd, avgeven, oddplaces = 0, evenplaces = 0;

	cout << "Enter any number : ";
	cin >> Num;
	cout << "Enter " << Num << " numbers : ";
	for (int i = 1; i <= Num; i++) 
	{
		cin >> num;
		if (i % 2 != 0) 
		{
			oddplaces += 1;
			sumodd += num;
		}
		else if (i % 2 == 0) 
		{
			evenplaces += 1;
			sumeven += num;
		}
	}
	avgodd = sumodd / oddplaces;
	avgeven = sumeven / evenplaces;
	cout << "\nThe average of numbers in odd places is = " << avgodd << " and the average of numbers in even places = " << avgeven << "\n\n\n\n\n\n\n";

}

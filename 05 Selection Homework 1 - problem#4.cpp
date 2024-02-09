//Write a program that reads in a number X, and then other 5 numbers. Print 
//out two values :
//○ 1) How many numbers <= X
//○ 2) How many numbers > X
//○ Can you see any relationship between these two outputs ?

#include <iostream>
using namespace std;
int main()
{
	int X;
	cout << "Enter main number : ";
	cin >> X;
	int a, b, c, d, e;
	cout << "Then , Enter five numbers : ";
	cin >> a >> b >> c >> d >> e;
	int num_less = 0;
	int num_greater = 0;
	if (a < X) //a
		num_less += 1;
	else
		num_greater += 1;
	if (b < X) //b
		num_less += 1;
	else
		num_greater += 1;
	if (c < X) //c
		num_less += 1;
	else
		num_greater += 1;
	if (d < X) //d
		num_less += 1;
	else
		num_greater += 1;
	if (e < X) //e
		num_less += 1;
	else
		num_greater += 1;
	cout << "The numbers that are less than main number : " << num_less << " number(s) , and the numbers that are greater than main number : " << num_greater << " number(s)\n\n\n";
	

}


/*
Problem #2: Line Of Characters
● Input: Read an integer N followed by a single character
● Output: Print the character N times as below
● Input ⇒ Output
○ 5 Y ⇒ YYYYY
○ 3 # ⇒ ###
*/
#include <iostream>
using namespace std;
int main()
{
	int num;
	char ch;
	cout << "Enter any integer number then the character you want to print : ";
	cin >> num >> ch;
	cout << "\n";
	for (int i = 0; i < num; i++) 
	{
		cout << ch;
	}
	cout << "\n\n\n";
}


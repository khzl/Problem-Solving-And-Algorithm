#include <iostream>
#include <string>
using namespace std;
void Display(char string[])
{
	cout << "Entered char array is: " << string << endl;
}
void Display(string string)
{
	cout << "Entered string is: " << string << endl;
}
int main()
{
	string string1;
	char string[100];
	cout << "Enter a string: ";
	getline(cin, string1);
	cout << "Enter another string: ";
	cin.get(string, 100, '\n');
	Display(string1);
	Display(string);
	return 0;
}

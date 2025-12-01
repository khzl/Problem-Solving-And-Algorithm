#include <iostream>
using namespace std;
void DisplayingArrayElements()
{
	int Numbers[5] = { 7,5,6,12,35 };
	cout << "The Numbers are: ";
	for (const int& Number : Numbers)
	{
		cout << Number << " ";
	}
	cout << "\nThe Numbers are: ";
	for (int Counter = 0; Counter < 5; ++Counter)
	{
		cout << Numbers[Counter] << " ";
	}
}
int main()
{
	DisplayingArrayElements();
	return 0;
}

#include <iostream>
using namespace std;
void DisplaySumAndAverageOfArrayElementsUsingForLoop()
{
	double Numbers[] = { 7,5,6,12,35,27 };
	double Sum = 0, Counter = 0, Average;
	cout << "The Numbers are: ";
	for (const double& Number : Numbers)
	{
		cout << Number << " ";
		Sum += Number;
		++Counter;
	}
	cout << "\nTheir Sum = " << Sum << endl;
	Average = Sum / Counter;
	cout << "Their Average = " << Average << endl;
}
int main()
{
	DisplaySumAndAverageOfArrayElementsUsingForLoop();
	return 0;
}

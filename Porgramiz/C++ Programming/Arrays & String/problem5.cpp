#include <iostream>
using namespace std;
void TwoDimensionalArray()
{
	int Test[3][2] = { 
		{2,-5},
		{4,0},
		{9,1}
	};
	for (int CounterRow = 0; CounterRow < 3; ++CounterRow)
	{
		for (int CounterColumn = 0; CounterColumn < 2; ++CounterColumn)
		{
			cout << "Test[" << CounterRow << "][" << CounterColumn << "]= " << Test[CounterRow][CounterColumn] << endl;
		}
	}
}
void TakingInputForTwoDimensionalArray()
{
	int Numbers[2][3];
	cout << "Please Enter 6 Numbers: " << endl;
	for (int CounterRow = 0; CounterRow < 2; ++CounterRow)
	{
		for (int CounterColumn = 0; CounterColumn < 3; ++CounterColumn)
		{
			cin >> Numbers[CounterRow][CounterColumn];
		}
	}
	cout << "The numbers are: " << endl;
	for (int CounterRow = 0; CounterRow < 2; ++CounterRow)
	{
		for (int CounterColumn = 0; CounterColumn < 3; ++CounterColumn)
		{
			cout << "Numbers[" << CounterRow << "][" << CounterColumn << "]: " << Numbers[CounterRow][CounterColumn] << endl;
 		}
	}
}
void ThreeDimensionalArray()
{
	int Test[2][3][2] = {
		{
			{1,2},
		    {3,4},
		    {5,6}
        },
		{
			{7,8},
		    {9,10},
		    {11,12}
        }
	};
	for (int CounterRow = 0; CounterRow < 2; ++CounterRow)
	{
		for (int CounterColumn = 0; CounterColumn < 3; ++CounterColumn)
		{
			for (int CounterArray = 0; CounterArray < 2; ++CounterArray)
			{
				cout << "Test[" << CounterRow << "][" << CounterColumn << "][" << CounterArray << "] = " << Test[CounterRow][CounterColumn][CounterArray] << endl;
			}
		}
	}
}
int main()
{
	TwoDimensionalArray();
	cout << "\n---------------------------\n";
	TakingInputForTwoDimensionalArray();
	cout << "\n---------------------------\n";
	ThreeDimensionalArray();
	return 0;
}

#include <iostream>
using namespace std;
void PassingOneDimensionalArrayToFunction(int Array1[5])
{
	cout << "Displaying Marks: " << endl;
	for (int CounterRow = 0; CounterRow < 5; ++CounterRow)
	{
		cout << "Student " << CounterRow + 1 << ": " << Array1[CounterRow] << endl;
	}
}
void PassingMultiDimensionalArrayToFunction(int Array2[][2])
{
	cout << "Displaying Values: " << endl;
	for (int CounterRow = 0; CounterRow < 3; ++CounterRow)
	{
		for (int CounterColumn = 0; CounterColumn < 2; ++CounterColumn)
		{
			cout << "Number[" << CounterRow << "][" << CounterColumn << "]: " << Array2[CounterRow][CounterColumn] << endl;
		}
	}
}
int main()
{
	int Marks[5] = { 88,76,90,61,69 };
	PassingOneDimensionalArrayToFunction(Marks);
	cout << "\n----------------------------\n";
	int Number[3][2] = {
		{3,4},
		{9,5},
		{7,1}
	};
	PassingMultiDimensionalArrayToFunction(Number);
	return 0;
}

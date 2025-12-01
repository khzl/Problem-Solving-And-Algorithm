#include <iostream>
using namespace std;
void TakeInputsFromUserAndStoreThemInAnArray()
{
	int Numbers[5];
	cout << "Please Enter 5 Numbers: " << endl;
	for (int Counter = 0; Counter < 5; ++Counter)
	{
		cin >> Numbers[Counter];
	}
	cout << "The Numbers are: " ;
	for (int Number = 0; Number < 5; ++Number)
	{
		cout << Numbers[Number] << " ";
	}
}
int main()
{
	TakeInputsFromUserAndStoreThemInAnArray();
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;
void RangedForLoopUsingArray()
{
	int NumberArray[] = { 1,2,3,4,5 };
	for (const int &Number : NumberArray)
	{
		cout << Number << " ";
	}
}
void RangedForLoopUsingVector()
{
	vector<int>NumberVector = { 1,2,3,4,5 };
	for (const int &Number : NumberVector)
	{
		cout << Number << " ";
	}
}
void DeclareCollectionInsideTheloop()
{
	for (const int Number : {1, 2, 3, 4, 5})
	{
		cout << Number << " ";
	}
}
int main()
{
	RangedForLoopUsingArray();
	cout <<  endl;
	RangedForLoopUsingVector();
	cout <<  endl;
	DeclareCollectionInsideTheloop();
	return 0;
}

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
class Solution
{
public:
	vector<int> TwoSum(vector<int>& Numbers, int Target)
	{
		unordered_map<int,int>Map;
		for (int Counter = 0; Counter < Numbers.size(); ++Counter)
		{
			int Complement = Target - Numbers[Counter];
			if (Map.count(Complement))
			{
				return { Map[Complement],Counter };
			}
			Map[Numbers[Counter]] = Counter;
		}
		return {};
	}
};
int main()
{
	Solution solution;
	vector<int>Numbers = { 3,3 };
	int Target = 6;
	vector<int>Result = solution.TwoSum(Numbers, Target);
	if (!Result.empty())
	{
		cout << "Indices of the two numbers that add up to the target are: " << Result[0] << " and " << Result[1] << endl;
	}
	else
	{
		cout << "No solution found." << endl;
	}
	return 0;
}

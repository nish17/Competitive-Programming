#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> t)
{
	for (int i = 0; i < t.size(); i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	for (int i = 0; i < t.size(); i++)
	{
		cout << t[i] << "\t";
	}
	cout << endl;
}

vector<int> twoNumberSum(vector<int> array, int targetSum)
{
	int i = 0;
	int j = array.size() - 1;
	vector<int> temp, result;
	temp = array;
	int f = 0;
	while (f != 1)
	{
		if (i < j)
		{
			if (array[i] + array[j] > targetSum)
			{
				cout << array[i] << " + " << array[j] << " = " << array[i] + array[j] << " (sum is greater than " << targetSum << ")" << endl;
				j--;
			}
			else if (array[i] + array[j] < targetSum)
			{
				cout << array[i] << " + " << array[j] << " = " << array[i] + array[j] << " (sum is less than " << targetSum << ")" << endl;
				i++;
			}
			else if (array[i] + array[j] == targetSum)
			{
				cout << array[i] << " + " << array[j] << " = " << array[i] + array[j] << " (sum is equal to " << targetSum << ")" << endl;
				if (array[i] > array[j])
				{
					result.push_back(array[j]);
					result.push_back(array[i]);
					f = 1;
					break;
				}
				else
				{
					result.push_back(array[i]);
					result.push_back(array[j]);
					f = 1;
					break;
				}
			}
		}
		else
			break;
	}
	return result;
}
int main()
{

	int t, temp;
	cin >> t;

	vector<int> array, r;
	for (int i = 0; i < 10; i++)
	{
		cin >> temp;
		array.push_back(temp);
	}
	// printVector(array);
	sort(array.begin(), array.end());
	printVector(array);
	r = twoNumberSum(array, t);
	for (int i = 0; i < r.size(); i++)
	{
		cout << r[i] << " ";
	}
	cout << endl;
	return 0;
}

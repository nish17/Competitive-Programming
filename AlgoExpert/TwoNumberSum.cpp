#include <bits/stdc++.h>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum)
{
  // Write your code here.
  vector<int> result;

  for (int i = 0; i < array.size() - 1; i++)
  {
    for (int j = i + 1; j < array.size(); j++)
    {
      if (array[i] + array[j] == targetSum)
      {
        if (array[i] > array[j])
        {
          result.push_back(array[j]);
          result.push_back(array[i]);
        }
        else
        {
          result.push_back(array[i]);
          result.push_back(array[j]);
        }
      }
    }
  }
  return result;
}

int main()
{

  int t;
  cin >> t;

  vector<int> array, r;
  for (int i = 0; i < 10; i++)
  {
    cin >> array[i];
  }
  r = twoNumberSum(array, t);
  for (int i = 0; i < r.size(); i++)
  {
    cout << r[i] << endl;
  }
  return 0;
}
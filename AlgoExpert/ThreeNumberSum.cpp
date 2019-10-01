#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> temp;
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i + 1; j < array.size(); j++)
        {
            for (int k = j + 1; k < array.size(); k++)
            {
                if (array[i] + array[j] + array[k] == targetSum)
                {
                    temp.push_back(array[i]);
                    temp.push_back(array[j]);
                    temp.push_back(array[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}

void printVector(vector<vector<int>> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}
void printVEctor(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int x, targetSum;
    vector<int> array;
    vector<vector<int>> ans;
    for (int i = 0; i < 8; i++)
    {
        cin >> x;
        array.push_back(x);
        // printVEctor(array);
    }
    cin >> targetSum;
    ans = threeNumberSum(array, targetSum);
    printVector(ans);
    return 0;
}
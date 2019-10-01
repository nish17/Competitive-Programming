#include <bits/stdc++.h>
using namespace std;
/* 
void printVector(vector<int> t)
{

    for (int i = 0; i < t.size(); i++)
    {
        cout << t[i] << " ";
    }
    cout << endl;
}

vector<int> find_factors(int number)
{
    int temp = 1;
    vector<int> t;
    while (temp <= number)
    {
        if (!(number % temp))
            if (number != temp)
                t.push_back(temp);

        temp++;
    }
    printVector(t);
    return t;
}

int solve(int A)
{
    // int ans = A;
    int temp = 1;
    int count = 0;
    vector<int> ans;
    ans = find_factors(A);
    // cout << "size of ans is " << ans.size() << endl;
    if (ans.size() > 1)
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            if (ans[i] <= 5)
            {
                // cout << ans[i];
                temp = temp * ans[i];
                // cout << " Value of count is " << count << endl;
                count++;
            }
        }
    return count - 1;
}
 */



int main()
{
    int t;
    cin >> t;
    cout << solve(t);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> t)
{

    for (int i = 0; i < t.size(); i++)
    {
        cout << i << " " << t[i] << " ";
        cout << endl;
    }
}

int ugly(int k)
{
    vector<int> ugly;
    ugly.push_back(1);

    int i = 1, count = 1;
    while (k > count)
    {
        i++;
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
        {
            ugly.push_back(i);
            count++;
        }
    }
    printVector(ugly);
    cout << "-----------\n";
    return ugly.back();
}

int main()
{
    int t;
    cin >> t;
    cout << ugly(t) << endl;
    return 0;
}
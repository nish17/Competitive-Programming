#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> t)
{

  for (int i = 0; i < t.size(); i++)
  {
    cout << t[i] << " ";
  }
  cout << endl;
}
int main()
{

  int t;
  long long int n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
      int v1;
      cin >> v1;
      if (v1 == 0)
      {
        a.insert(a.begin(), 0);
      }
      else if (v1 == 1)
      {
        a.push_back(v1);
      }
      else
        b.push_back(v1);
    }
    // sort(a.begin(), a.end());
    a.insert(a.end(), b.begin(), b.end());
    printVector(a);
  }
  return 0;
}
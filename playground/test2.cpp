#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  vector<int> a(t);

  // for (int i = t; i >= 1; i--)
  // {
  //   a.push_back(rand() % 5 + 1);
  // }
  // sort(a.begin(), a.end());

  // for (int i = 1; i <= t; i++)
  // {
  //   cout << a[i] << " ";
  // }

  // int a[t];
  for (int i = 0; i < t; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < t; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}
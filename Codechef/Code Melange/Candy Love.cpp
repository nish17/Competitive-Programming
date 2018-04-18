#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    int total = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      total += arr[i];
    }
    if (total % 2 != 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
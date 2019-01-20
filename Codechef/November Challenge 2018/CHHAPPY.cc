#include <bits/stdc++.h>
using namespace std;

void calculate(vector<long long int> a, long long int n, bool done)
{
  for (int i = 1; i < n + 1; i++)
  {
    for (int j = i + 1; j < n + 1; j++)
    {
      if (a[i] != a[j] && a[a[i]] == a[a[j]])
      {
        cout << "Truly Happy\n";
        done = true;
        break;
      }
    }
    if (done)
    {
      break;
    }
  }
  if (!done)
  {
    cout << "Poor Chef\n";
  }
}

int main()
{
  int t;
  long long int n;
  bool done = false;
  cin >> t;
  while (t--)
  {
    cin >> n;
    vector<long long int> a(n + 1);
    for (int i = 1; i < n + 1; i++)
      cin >> a[i];
    calculate(a, n, done);
  }
  return 0;
}

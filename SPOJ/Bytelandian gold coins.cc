#include <bits/stdc++.h>
using namespace std;
vector<long long int> a;

long long int func(long long int n)
{
  if (n <= 10)
  {
    return n;
  }
  else
    return a[n] = func(n / 2) + func(n / 3) + func(n / 4);
}

int main()
{
  long long int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    a.push_back(-1);
  }
  cout << func(t) << endl;
  return 0;
}
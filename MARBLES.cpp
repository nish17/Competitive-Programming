#include <bits/stdc++.h>
using namespace std;
long long int calResult(int a, int b)
{
  int n = a - 1;
  int r = b - 1, i = 0;
  long long int result = 1;
  if (r > n / 2)
  {
    r = n - r;
  }
  for (i = 0; i < r; i++)
  {
    result *= (n - i);
    result /= (i + 1);
  }
  return result;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long int n, k;
    cin >> n >> k;
    cout << calResult(n, k) << endl;
  }
  return 0;
}
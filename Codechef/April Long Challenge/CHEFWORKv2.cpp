#include <bits/stdc++.h>
using namespace std;
int k = 1;
void autt(vector<long int> a)
{
  sort(a.begin(), a.end());
  cout << a[0] << endl;
  k = 0;
}
long int setValue(long int i, vector<long int> a, long int temp)
{
  if (temp == 0)
    temp = a[i];
  else if (temp >= a[i])
    temp = a[i];
  return temp;
}
int main()
{
  long int n, l = 0;
  cin >> n;
  assert(1 <= n && n <= 1000);
  vector<long int>
      a(n), b(n);
  long int c = 0, d = 0, e = 0;
  for (long int i = 0; i < n; i++)
  {
    cin >> a[i];
    assert(1 <= a[i] && a[i] <= 100000);
  }
  for (long int i = 0; i < n; i++)
  {
    cin >> b[i];
    assert(1 <= b[i] && b[i] <= 3);
    if (b[i] == 3)
      l++;
    if (l == n)
    {
      autt(a);
      break;
      exit(1);
    }
    else if (b[i] == 1)
    {
      c = setValue(i, a, c);
    }
    else if (b[i] == 2)
    {
      d = setValue(i, a, d);
    }
    else if (b[i] == 3)
    {
      e = setValue(i, a, e);
    }
  }
  if (k != 0)
  {
    if (c + d < e)
      cout << c + d << endl;
    else
      cout << e << endl;
  }
  return 0;
}